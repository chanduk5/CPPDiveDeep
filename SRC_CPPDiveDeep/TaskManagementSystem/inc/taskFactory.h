#pragma once
#include "task.h"

//task factory class
class TaskFactory {
    public:
        //task factory get instance
        static TaskFactory* getInstance();

        //create task
        Task* createTask(uint32_t taskID,
                        std::string taskType, 
                        std::string taskName, 
                        std::string taskDescription, 
                        std::string taskPriority, 
                        std::string taskStatus, 
                        std::string taskDueDate);

        //delete task
        void deleteTask(Task* task);
    private:
        TaskFactory() {}
        TaskFactory(const TaskFactory&) = delete;
        TaskFactory& operator=(const TaskFactory&) = delete;
};