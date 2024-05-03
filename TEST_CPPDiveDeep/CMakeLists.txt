
enable_testing()

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/dddb219c3eb96d7f9200f09b0a381f016e6b4562.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB TESTS
    *.cpp
)

add_executable(test  
               ${TESTS} )
               
target_link_libraries(test gtest_main gmock_main)

add_test(NAME TestCPPDiveDeep COMMAND test)

#include(GoogleTest)
#gtest_discover_tests(TestCPPDiveDeep)