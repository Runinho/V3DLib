add_library(settings STATIC "")
target_sources(settings PRIVATE Settings.cpp PUBLIC Settings.h)
target_link_libraries(settings v3dlib CmdParameter)