
set(SOURCES
    src/source.cpp
    src/logger.cpp
)

include_directories(inc)

add_executable(CPPDiveDeep  
               ${SOURCES} )
               
target_link_libraries(CPPDiveDeep gtest_main gmock_main)