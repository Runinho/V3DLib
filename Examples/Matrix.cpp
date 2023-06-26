#include <unistd.h>  // sleep()
#include <math.h>
#include <V3DLib.h>
#include <iostream>
#include <fstream>
#include "Support/Settings.h"
#include "Support/Timer.h"
#include "Support/debug.h"
#include "Kernels/Matrix.h"

using namespace V3DLib;
using namespace kernels;


// ============================================================================
// Command line handling
// ============================================================================

std::vector<const char *> const kernel_id = { "qpu", "cpu" };  // First is default


CmdParameters params = {
  "Matrix Multiplication\n\n"
  "Calculates the multiplication of two square matrices\n",
  {{
    "Kernel",
    "-k=",
    kernel_id,
    "Select the kernel to use\n"
  },{
    "Matrix dimension",
    { "-d=","-dimension="},
    ParamType::POSITIVE_INTEGER,
    "The number of matrix elements in a row/column. "
    "Must be a multiple of 16",
    48
  },{
    "Number of repeats",
    { "-p=","-repeat="},
    ParamType::POSITIVE_INTEGER,
    "The number times to execute the matrix multiplication",
    1
  },{
    "Save result",
    { "-o", "-save"},
    ParamType::INTEGER,
    "Saves the result of the calculation in a binary format. (a.bin, b.bin, result.bin)",
    0,
  }}
};


struct MatrixSettings : public Settings {
  int kernel;
  int dimension;
  int repeats;
  bool save_result;


    int size() const { return dimension*dimension; }

  MatrixSettings() : Settings(&params, true) {}

  bool init_params() override {
    auto const &p = parameters();

    kernel      = p["Kernel"           ]->get_int_value();
    dimension   = p["Matrix dimension" ]->get_int_value();
    repeats     = p["Number of repeats"]->get_int_value();
    save_result = p["Save result"      ]->get_int_value();
    return true;
  }
} settings;



// ============================================================================
// Local functions
// ============================================================================

void run_scalar_kernel() {
  if (settings.compile_only) return;
 
  // Allocate and initialise
  float *a      = new float [settings.size()];
  float *b      = new float [settings.size()];
  float *result = new float [settings.size()];

  for (int i = 0; i < settings.size(); i++) {
    a[i] = random_float();
    b[i] = random_float();
  }

  Timer timer;
  for (int i = 0; i < settings.repeats; ++i) {
    kernels::matrix_mult_scalar(settings.dimension, result, a, b);
  }
  timer.end(!settings.silent);

  delete [] a;
  delete [] b;
  delete [] result;
}

// with help of chatGPT
void writeFloatDataToFile(const std::string& filename, Shared2DArray<float>& array) {
  std::ofstream outFile(filename, std::ios::binary);
  if (!outFile) {
    std::cout << "failed to open filename: " << filename << std::endl;
    // Failed to open the file
    return;
  }

  // first write the dimension as float for easier parsing in python
  float dimensions = 2;
  outFile.write(reinterpret_cast<const char*>(&dimensions), sizeof(float));

  // write the dimension sizes
  float dims[] = {static_cast<float>(array.rows()), static_cast<float>(array.columns())};
  outFile.write(reinterpret_cast<const char*>(dims), 2 * sizeof(float));

  // Write the float data to the file
  auto num_elements = array.rows() * array.columns();
  outFile.write(reinterpret_cast<const char*>(array.ptr()), num_elements * sizeof(float));

  // Close the file
  outFile.close();
  std::cout << "wrote array to file `" << filename << "`" << std::endl;
}

void run_qpu_kernel(bool save_result) {
  auto k = compile(kernels::matrix_mult_decorator(settings.dimension));  // Construct kernel
  k.setNumQPUs(settings.num_qpus);


  // Allocate and initialise arrays shared between ARM and GPU
  Shared2DArray<float> a(settings.dimension);
  Shared2DArray<float> b(settings.dimension);
  Shared2DArray<float> result(settings.dimension);

  for (int r = 0; r < settings.dimension; r++) {
    for (int c = 0; c < settings.dimension; c++) {
      a[r][c] = random_float();
      b[r][c] = random_float();
    }
  }

  Timer timer;
  k.load(&result, &a, &b);
  for (int i = 0; i < settings.repeats; ++i) {
    settings.process(k);
  }
  timer.end(!settings.silent);

  if (save_result) {
    // print matrixes
//  std::cout << "a:" << a.dump() << std::endl;
    writeFloatDataToFile("a.bin", a);
//  std::cout << "b:" << b.dump() << std::endl;
    writeFloatDataToFile("b.bin", b);
//  std::cout << "result:" << result.dump() << std::endl;
    writeFloatDataToFile("result.bin", result);
  }
}


// ============================================================================
// Main
// ============================================================================

int main(int argc, const char *argv[]) {
  settings.init(argc, argv);

  // Run a kernel as specified by the passed kernel index
  switch (settings.kernel) {
    case 0: run_qpu_kernel(settings.save_result);     break;
    case 1: run_scalar_kernel();  break;
    default: assert(false);       break;
  }

  if (!settings.silent) {
    auto name = kernel_id[settings.kernel];
    printf("Ran kernel '%s' %d time(s) with matrix size %d and %d QPU's.\n",
           name, settings.repeats, settings.dimension, settings.num_qpus);
  }

  return 0;
}
