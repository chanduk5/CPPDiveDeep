
set(SOURCES
    source.cpp
    src/logger.cpp
    src/for_each.cpp
)

include_directories(inc)

add_subdirectory(TaskManagementSystem)
aux_source_directory(TaskManagementSystem TASKMANAGEMENTSYSTEM_SOURCES)

add_executable(CPPDiveDeep  
               ${SOURCES}
               taskManagementSystem)
               
target_link_libraries(CPPDiveDeep gtest_main gmock_main)