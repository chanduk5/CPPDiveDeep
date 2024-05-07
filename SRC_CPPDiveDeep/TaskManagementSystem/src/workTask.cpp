#include <iostream>
#include "../inc/workTask.h"

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