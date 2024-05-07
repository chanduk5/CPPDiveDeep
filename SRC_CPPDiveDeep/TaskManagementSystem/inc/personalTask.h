#pragma once
#include <map>
#include "task.h"

//Concrete personal task class
class PersonalTask : public Task {
    private:
        std::map<uint32_t, TaskDetailes> personalTaskList; //Task ID, Task Details
    public:
        PersonalTask(uint32_t taskID, 
                    std::string taskName, 
                    std::string taskDescription, 
                    std::string taskPriority, 
                    std::string taskStatus, 
                    std::string taskDueDate);
        void deleteTask(uint32_t& taskID);
        void viewTask(uint32_t& taskID);
        void viewAllTasks();
        void viewTaskByStatus(std::string& taskStatus);
        void viewTaskByPriority(std::string& taskPriority);
        void viewTaskByDate(std::string& taskDueDate);
        ~PersonalTask();
};