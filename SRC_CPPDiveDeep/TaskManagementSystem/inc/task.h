#pragma once
#include <string>
#include <cstdint>

struct TaskDetailes {
    std::string taskName;
    std::string taskDescription;
    std::string taskPriority;
    std::string taskStatus;
    std::string taskDueDate;
};

//abstract task class
class Task {
    public:
        virtual void deleteTask(uint32_t& taskID) = 0;
        virtual void viewTask(uint32_t& taskID) = 0;
        virtual void viewAllTasks() = 0;
        virtual void viewTaskByStatus(std::string& taskStatus) = 0;
        virtual void viewTaskByPriority(std::string& taskPriority) = 0;
        virtual void viewTaskByDate(std::string& taskDueDate) = 0;
        virtual  ~Task() = default;
};
