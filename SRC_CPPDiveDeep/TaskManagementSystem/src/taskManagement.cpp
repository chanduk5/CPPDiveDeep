#include <iostream>
#include "../inc/taskManagement.h"
#include "../inc/taskFactory.h"
#include "../inc/task.h"

//Task Management class
void TaskManagement::registerObserver(const std::string& key, Observer* observer) {
    observerList[key].push_back(observer);
}

void TaskManagement::removeObserver(const std::string& key) {

    if(auto it = observerList.find(key); it != observerList.end() && it->second.size() > 1) {
        delete it->second[1];
        it->second.erase(it->second.begin() + 1);
    }
    else {
        observerList.erase(key);
    }
}

void TaskManagement::notifyObserver(const std::string& key,std::string& message) {
    for(auto& observer : observerList[key]) {
        observer->update(message);
    }
}

TaskManagement* TaskManagement::getInstance() {
    static TaskManagement instance;
    return &instance;
}

TaskManagement::~TaskManagement() {
    observerList.clear();
}

void TaskManagement::createTask(uint32_t taskID,
                std::string taskType, 
                std::string taskName, 
                std::string taskDescription, 
                std::string taskPriority, 
                std::string taskStatus, 
                std::string taskDueDate) {
    Task* task = TaskFactory::getInstance()->createTask(taskID, taskType, taskName, taskDescription, taskPriority, taskStatus, taskDueDate);
    if(task) {
        std::string message = "Task created with ID: " + std::to_string(taskID);
        notifyObserver("Task", message);
    }
}