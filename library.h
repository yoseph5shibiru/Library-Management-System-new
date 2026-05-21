#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"
#include "member.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;

public:
    void addBook();
    void displayBooks();
    void searchBook();
    void registerMember();
    void displayMembers();
};

#endif
