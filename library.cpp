#include "library.h"
#include <iostream>
#include <string>
using namespace std;

void Library::addBook() {
    Book b;
    int id;
    string title, author, category;

    cout << "\nEnter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter Category: ";
    getline(cin, category);

    b.setBook(id, title, author, category, true);
    books.push_back(b);

    cout << "\nBook Added Successfully.\n";
}

void Library::displayBooks() {
    if (books.empty()) {
        cout << "\nNo Books Found.\n";
        return;
    }
    cout << "\n===== BOOK LIST =====\n";
    for (auto &b : books) b.displayBook();
}

void Library::searchBook() {
    string keyword;
    cin.ignore();
    cout << "\nEnter Book Title: ";
    getline(cin, keyword);

    bool found = false;
    for (auto &b : books) {
        if (b.getTitle() == keyword) {
            b.displayBook();
            found = true;
        }
    }
    if (!found) cout << "\nBook Not Found.\n";
}

void Library::registerMember() {
    Member m;
    int id;
    string name, password;

    cout << "\nEnter Member ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Password: ";
    getline(cin, password);

    m.setMember(id, name, password);
    members.push_back(m);

    cout << "\nMember Registered Successfully.\n";
}

void Library::displayMembers() {
    if (members.empty()) {
        cout << "\nNo Members Found.\n";
        return;
    }
    cout << "\n===== MEMBER LIST =====\n";
    for (auto &m : members) m.displayMember();
}
