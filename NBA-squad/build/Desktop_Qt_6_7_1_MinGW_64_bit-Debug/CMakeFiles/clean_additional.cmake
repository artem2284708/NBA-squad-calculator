# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\NBA_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\NBA_autogen.dir\\ParseCache.txt"
  "NBA_autogen"
  )
endif()
