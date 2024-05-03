#include <iostream>

#include "../inc/taskManagement.h"

//Concrete work task class
WorkTask::WorkTask(uint32_t taskID, 
                std::string taskName, 
                std::string taskDescription, 
                std::string taskPriority, 
                std::string taskStatus, 
                std::string taskDueDate) {
    workTaskList[taskID] = {taskName, taskDescription, taskPriority, taskStatus, taskDueDate};
}

void WorkTask::deleteTask(uint32_t& taskID) {
    workTaskList.erase(taskID);
}

void WorkTask::viewTask(uint32_t& taskID) {

    for(auto& task : workTaskList) {
        if(task.first == taskID) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void WorkTask::viewAllTasks() {
    for(auto& task : workTaskList) {
        std::cout << "Task ID: " << task.first << std::endl;
        std::cout << "Task Name: " << task.second.taskName << std::endl;
        std::cout << "Task Description: " << task.second.taskDescription << std::endl;
        std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
        std::cout << "Task Status: " << task.second.taskStatus << std::endl;
        std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
    }
}

void WorkTask::viewTaskByStatus(std::string& taskStatus) {
    for(auto& task : workTaskList) {
        if(task.second.taskStatus == taskStatus) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void WorkTask::viewTaskByPriority(std::string& taskPriority) {
    for(auto& task : workTaskList) {
        if(task.second.taskPriority == taskPriority) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void WorkTask::viewTaskByDate(std::string& taskDueDate) {
    for(auto& task : workTaskList) {
        if(task.second.taskDueDate == taskDueDate) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

WorkTask::~WorkTask() {
    workTaskList.clear();
}

//Concrete personal task class
PersonalTask::PersonalTask(uint32_t taskID, 
                std::string taskName, 
                std::string taskDescription, 
                std::string taskPriority, 
                std::string taskStatus, 
                std::string taskDueDate) {
    personalTaskList[taskID] = {taskName, taskDescription, taskPriority, taskStatus, taskDueDate};
}

void PersonalTask::deleteTask(uint32_t& taskID) {
    personalTaskList.erase(taskID);
}

void PersonalTask::viewTask(uint32_t& taskID) {

    for(auto& task : personalTaskList) {
        if(task.first == taskID) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void PersonalTask::viewAllTasks() {
    for(auto& task : personalTaskList) {
        std::cout << "Task ID: " << task.first << std::endl;
        std::cout << "Task Name: " << task.second.taskName << std::endl;
        std::cout << "Task Description: " << task.second.taskDescription << std::endl;
        std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
        std::cout << "Task Status: " << task.second.taskStatus << std::endl;
        std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
    }
}

void PersonalTask::viewTaskByStatus(std::string& taskStatus) {
    for(auto& task : personalTaskList) {
        if(task.second.taskStatus == taskStatus) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void PersonalTask::viewTaskByPriority(std::string& taskPriority) {
    for(auto& task : personalTaskList) {
        if(task.second.taskPriority == taskPriority) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

void PersonalTask::viewTaskByDate(std::string& taskDueDate) {
    for(auto& task : personalTaskList) {
        if(task.second.taskDueDate == taskDueDate) {
            std::cout << "Task ID: " << task.first << std::endl;
            std::cout << "Task Name: " << task.second.taskName << std::endl;
            std::cout << "Task Description: " << task.second.taskDescription << std::endl;
            std::cout << "Task Priority: " << task.second.taskPriority << std::endl;
            std::cout << "Task Status: " << task.second.taskStatus << std::endl;
            std::cout << "Task Due Date: " << task.second.taskDueDate << std::endl;
        }
    }
}

PersonalTask::~PersonalTask() {
    personalTaskList.clear();
}

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

// Member class
Member::Member(std::string name, std::string email, std::string phone) {
    this->memberName = name;
    this->memberEmail = email;
    this->memberPhone = phone;
}

void Member::update(std::string& message) {
    std::cout << "Member: " << memberName << " received message: " << message << std::endl;
}

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

// Path: SRC_CPPDiveDeep/src/main.cpp
void TestTaskManagement() {
    TaskManagement* taskManagement = TaskManagement::getInstance();
    Member* member1 = new Member("John", "John@task.com", "0x1");
    Member* member2 = new Member("Jane", "Jane@task.com", "0x2");
    taskManagement->registerObserver("Task", member1);
    taskManagement->registerObserver("Task", member2);
    taskManagement->createTask(1, "Work", "Work Task 1", "Work Task 1 Description", "High", "Open", "2024-05-05");
    taskManagement->createTask(2, "Personal", "Personal Task 1", "Personal Task 1 Description", "Low", "Open", "2024-05-05");
}