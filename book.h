#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>  // needed because displayBook() uses std::cout

class Book {
private:
    int id;
    std::string title;
    std::string author;
    std::string category;
    bool available;

public:
    Book();
    void setBook(int bookId, std::string bookTitle, std::string bookAuthor,
                 std::string bookCategory, bool status);
    int getId();
    std::string getTitle();
    std::string getAuthor();
    std::string getCategory();
    bool isAvailable();
    void borrowBook();
    void returnBook();
    void displayBook();
};

#endif
