set(TASKMANAGEMENTSYSTEM_SOURCES
    src/member.cpp
    src/personalTask.cpp
    src/taskFactory.cpp
    src/taskManagement.cpp
    src/taskManagementSystem.cpp
    src/workTask.cpp
)

include_directories(inc)
add_library(taskManagementSystem_lib ${TASKMANAGEMENTSYSTEM_SOURCES})