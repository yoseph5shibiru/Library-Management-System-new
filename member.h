#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <iostream>  // needed because displayMember() uses std::cout

class Member {
private:
    int id;
    std::string name;
    std::string password;

public:
    Member();
    void setMember(int memberId, std::string memberName, std::string memberPassword);
    int getId();
    std::string getName();
    std::string getPassword();
    void displayMember();
};

#endif
