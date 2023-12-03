# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HeapStackMemory_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HeapStackMemory_autogen.dir\\ParseCache.txt"
  "HeapStackMemory_autogen"
  )
endif()
