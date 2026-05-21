#include <iostream>
#include "book.h"
#include "member.h"
#include "library.h"
using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Register Member\n";
        cout << "5. Display Members\n";
        cout << "6. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: library.addBook(); break;
            case 2: library.displayBooks(); break;
            case 3: library.searchBook(); break;
            case 4: library.registerMember(); break;
            case 5: library.displayMembers(); break;
            case 6: cout << "\nExiting System...\n"; break;
            default: cout << "\nInvalid Choice.\n";
        }
    } while (choice != 6);

    return 0;
}
