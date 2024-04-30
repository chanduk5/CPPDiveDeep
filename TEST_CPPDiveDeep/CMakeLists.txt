
set(TESTS
    testMain.cpp
)

add_executable(TestCPPDiveDeep  
               ${TESTS} )
               
target_link_libraries(TestCPPDiveDeep gtest_main gmock_main)

include(GoogleTest)
gtest_discover_tests(TestCPPDiveDeep)