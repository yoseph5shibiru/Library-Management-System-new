#include "member.h"
#include <iostream>
using namespace std;

Member::Member() {
    id = 0;
    name = "";
    password = "";
}

void Member::setMember(int memberId, string memberName, string memberPassword) {
    id = memberId;
    name = memberName;
    password = memberPassword;
}

int Member::getId() { return id; }
string Member::getName() { return name; }
string Member::getPassword() { return password; }

void Member::displayMember() {
    cout << "\nMember ID: " << id << endl;
    cout << "Name: " << name << endl;
}
