#include "../inc/taskManagementSystem.h"
#include "../inc/taskManagement.h"

// Path: SRC_CPPDiveDeep/src/main.cpp
void TaskManagementSystem() {
    TaskManagement* taskManagement = TaskManagement::getInstance();
    Member* member1 = new Member("John", "John@task.com", "0x1");
    Member* member2 = new Member("Jane", "Jane@task.com", "0x2");
    taskManagement->registerObserver("Task", member1);
    taskManagement->registerObserver("Task", member2);
    taskManagement->createTask(1, "Work", "Work Task 1", "Work Task 1 Description", "High", "Open", "2024-05-05");
    taskManagement->createTask(2, "Personal", "Personal Task 1", "Personal Task 1 Description", "Low", "Open", "2024-05-05");
}