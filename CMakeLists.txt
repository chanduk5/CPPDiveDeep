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


include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/dddb219c3eb96d7f9200f09b0a381f016e6b4562.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(SRC_CPPDiveDeep)
add_subdirectory(TEST_CPPDiveDeep)