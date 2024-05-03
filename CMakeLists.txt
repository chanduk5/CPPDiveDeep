cmake_minimum_required(VERSION 3.24)
project(CPPDiveDeep)

set(CMAKE_CXX_STANDARD 20)

if(WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")
  # Set the compiler to the one in the msys64 folder
  set(CMAKE_CXX_COMPILER "C:/msys64/ucrt64/bin/g++.exe")
  set(CMAKE_C_COMPILER "C:/msys64/ucrt64/bin/gcc.exe")
elseif(LINUX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror -Wno-unused-variable")
endif()

add_subdirectory(SRC_CPPDiveDeep)
add_subdirectory(TEST_CPPDiveDeep)