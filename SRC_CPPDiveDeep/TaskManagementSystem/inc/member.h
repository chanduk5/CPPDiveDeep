#pragma once
#include <string>

//Observer Interface class
class Observer {
    public:
        virtual void update(std::string& message) = 0;
        virtual ~Observer() = default;
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