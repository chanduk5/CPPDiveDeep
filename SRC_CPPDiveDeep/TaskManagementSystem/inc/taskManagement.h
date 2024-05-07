#pragma once
#include <map>
#include <vector>
#include <cstdint>
#include "member.h"

//Subject Interface class
class Subject {
    public:
        virtual void registerObserver(const std::string& key,Observer* observer) = 0;
        virtual void removeObserver(const std::string& key) = 0;
        virtual void notifyObserver(const std::string& key,std::string& message) = 0;
        virtual ~Subject() = default;
};

//Task Management class
class TaskManagement : public Subject {
    private:
        std::map<std::string, std::vector<Observer*>> observerList;
        TaskManagement() {}
        TaskManagement(const TaskManagement&) = delete;
        TaskManagement& operator=(const TaskManagement&) = delete;
    public:
        static TaskManagement* getInstance();
        void registerObserver(const std::string& key,Observer* observer) override;
        void removeObserver(const std::string& key) override;
        void notifyObserver(const std::string& key,std::string& message) override;
        void createTask(uint32_t taskID,
                        std::string taskType, 
                        std::string taskName, 
                        std::string taskDescription, 
                        std::string taskPriority, 
                        std::string taskStatus, 
                        std::string taskDueDate);
        ~TaskManagement();
};