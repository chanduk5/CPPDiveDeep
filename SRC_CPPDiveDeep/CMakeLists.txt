
set(SOURCES
    source.cpp
    src/logger.cpp
    src/for_each.cpp
)

include_directories(inc)

add_executable(CPPDiveDeep  
               ${SOURCES})

add_subdirectory(TaskManagementSystem)
target_link_libraries(CPPDiveDeep taskManagementSystem_lib gtest_main gmock_main)