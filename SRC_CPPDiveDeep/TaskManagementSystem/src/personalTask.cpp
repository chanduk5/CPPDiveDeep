#include <iostream>
#include "../inc/personalTask.h"

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
