#include "book.h"
#include <iostream>
using namespace std;

Book::Book() {
    id = 0;
    title = "";
    author = "";
    category = "";
    available = true;
}

void Book::setBook(int bookId, string bookTitle, string bookAuthor,
                   string bookCategory, bool status) {
    id = bookId;
    title = bookTitle;
    author = bookAuthor;
    category = bookCategory;
    available = status;
}

int Book::getId() { return id; }
string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
string Book::getCategory() { return category; }
bool Book::isAvailable() { return available; }

void Book::borrowBook() { available = false; }
void Book::returnBook() { available = true; }

void Book::displayBook() {
    cout << "\nBook ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Category: " << category << endl;
    cout << "Status: " << (available ? "Available" : "Borrowed") << endl;
}
