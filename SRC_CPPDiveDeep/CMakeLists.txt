
set(SOURCES
    source.cpp
    src/logger.cpp
    TaskManagementSystem/src/taskManagement.cpp
)

include_directories(inc)

add_executable(CPPDiveDeep  
               ${SOURCES} )
               
#target_link_libraries(CPPDiveDeep gtest_main gmock_main)