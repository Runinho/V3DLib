
# TODO

Feel free to add points here. If you complete a point, don't check it off, but remove it from the list.


## Makefile

- [ ] Enable debug-build, for debugging. Currently, an indication is given in the Makefile how to do this.


## Documentation

- [ ] Document openGL issue on RPi 3
- [ ] Explanation code
  - [ ] 16-item vectors
  - [ ] Code Generation, not direct execution
- [ ] Drill-down of the bare essentials for understanding `VideoCore`
- [ ] Examples to separate page under Docs
- [ ] Mailbox functions link to reference and explanation two size fields
- [ ] QPU's always round *downward*


## Unit Tests

- [ ] Add test on expected source and target output for pretty print in `compileKernel`. E.g. for `Rot3D`, `Tri` and `HeatMap`.


## Investigate

- [ ] Is the gather limit 8 or 4? This depends on threading being enabled, check code for this.
- [ ] Find conclusive method to determine non-RPi platform. This to block compilation for QPU, see 'Prevent compile' below.
- [ ] Improve heap implementation and usage. the issue is that heap memory can not be reclaimed. Suggestions:
  - Allocate `astHeap` for each kernel. Perhaps also do this for other heaps
  - Increase heap size dynamically when needed
  - Use `new/delete` instead. This would defeat the purpose of the heaps, which is to contain memory usage
  - Add freeing of memory to heap definitions. This will increase the complexity of the heap code hugely
- [ ] Can the actual number of available QPU's be determined runtime? **Answer:** Yes! See issue #33, `qpuinfo` project on github


## Library Code

- [ ] Add check in emulator for too many `gather()` calls
- [ ] Add namespace `qpulib` to Lib-files
- [ ] Add method to determine RPi hardware revision number via mailbox
- [ ] Add code for using the `Special Functions Unit (SFU)`, operations: `SQRT`, `RECIPSQRT`, `LOG`, `EXP`


## Other

- [ ] `Rot3D` make various versions selectable on command line
- [ ] Prevent compile on non-RPi for `QPU=1`
- [ ] enable `-Wall` on compilation and deal with all the fallout
- [ ] Scan current docs for typo's, good language


## Long Term

- [ ] Add optional doc generation with `doxygen`. This is only useful if there are a sufficient number of header comments.

-----

## Principles

- QPU-mode should not compile on non-RPi platforms


## Stuff to Consider

### Measure performance in various ways

E.g. compare between:

  - different iterations of a program
  - number of QPU's used
  - RPi versions
  
  
### The QPULib compiler doesn't do much in the way of optimisation.

So the question is how far QPULib programs are off hand-written QPU assembly, and what we can do to get closer.


### Set up Guidelines for the Project

This blog contains great tips for setting up open source projects: 

- [The Bitter Guide to Open Source](https://medium.com/@ken_wheeler/a-bitter-guide-to-open-source-a8e3b6a3c1c4) by Ken Wheeler.

One day, I would like to convert the points mentioned here to a checklist and implement these for `QPULib`.