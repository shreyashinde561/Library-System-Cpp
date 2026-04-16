#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library lib;
    lib.loadFromFile();

    int choice;

    do {
        cout << "\n1.Add 2.Show 3.Search 4.Delete 5.Issue 6.Exit\n";
        cin >> choice;

        if(choice == 1) {
            int id;
            string title, author;

            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();

            cout << "Title: ";
            getline(cin, title);

            cout << "Author: ";
            getline(cin, author);

            lib.addBook(Book(id, title, author));
        }
        else if(choice == 2) lib.displayBooks();
        else if(choice == 3) {
            int id; cin >> id;
            lib.searchBook(id);
        }
        else if(choice == 4) {
            int id; cin >> id;
            lib.deleteBook(id);
        }
        else if(choice == 5) {
            int id; cin >> id;
            lib.issueBook(id);
        }

    } while(choice != 6);

    lib.saveToFile();
}