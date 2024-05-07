#include <iostream>
#include "../inc/member.h"

// Member class
Member::Member(std::string name, std::string email, std::string phone) {
    this->memberName = name;
    this->memberEmail = email;
    this->memberPhone = phone;
}

void Member::update(std::string& message) {
    std::cout << "Member: " << memberName << " received message: " << message << std::endl;
}