#include <string>
#include <list>
#include <map>
#include <cstdint>
#include <vector>

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


//Concrete work task class
class WorkTask : public Task {
    private:
        std::map<uint32_t, TaskDetailes> workTaskList; //Task ID, Task Details
    public:
        WorkTask(uint32_t taskID, 
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
        ~WorkTask();
};

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

//Observer Interface class
class Observer {
    public:
        virtual void update(std::string& message) = 0;
        virtual ~Observer() = default;
};

//Subject Interface class
class Subject {
    public:
        virtual void registerObserver(const std::string& key,Observer* observer) = 0;
        virtual void removeObserver(const std::string& key) = 0;
        virtual void notifyObserver(const std::string& key,std::string& message) = 0;
        virtual ~Subject() = default;
};

//Member class
class Member : public Observer {
    private:
        std::string memberName;
        std::string memberEmail;
        std::string memberPhone;
    public:
        Member(std::string name, std::string email, std::string phone);
        void update(std::string& message) override;
        ~Member() = default;
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

void TestTaskManagement();