# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/TestGame_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TestGame_autogen.dir/ParseCache.txt"
  "TestGame_autogen"
  )
endif()
