# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Time_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Time_autogen.dir/ParseCache.txt"
  "Time_autogen"
  )
endif()
