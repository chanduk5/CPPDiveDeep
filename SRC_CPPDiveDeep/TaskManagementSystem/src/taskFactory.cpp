#include "../inc/taskFactory.h"
#include "../inc/workTask.h"
#include "../inc/personalTask.h"

// Task factory class
TaskFactory* TaskFactory::getInstance() {
    static TaskFactory instance;
    return &instance;
}

Task* TaskFactory::createTask(uint32_t taskID,
                std::string taskType, 
                std::string taskName, 
                std::string taskDescription, 
                std::string taskPriority, 
                std::string taskStatus, 
                std::string taskDueDate) {
    if(taskType == "Work") {
        return new WorkTask(taskID, taskName, taskDescription, taskPriority, taskStatus, taskDueDate);
    }
    else if(taskType == "Personal") {
        return new PersonalTask(taskID, taskName, taskDescription, taskPriority, taskStatus, taskDueDate);
    }
    else {
        return nullptr;
    }
}

void TaskFactory::deleteTask(Task* task) {
    delete task;
}