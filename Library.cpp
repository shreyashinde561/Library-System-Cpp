#include <iostream>
#include <vector>
#include <fstream>
#include "Library.h"

using namespace std;

void Library::addBook(Book b) {
    books.push_back(b);
}

void Library::displayBooks() {
    for(auto &b : books) b.display();
}

void Library::searchBook(int id) {
    for(auto &b : books) {
        if(b.getId() == id) {
            b.display();
            return;
        }
    }
    cout << "Book not found\n";
}

void Library::deleteBook(int id) {
    for(int i = 0; i < books.size(); i++) {
        if(books[i].getId() == id) {
            books.erase(books.begin() + i);
            cout << "Book deleted\n";
            return;
        }
    }
}

void Library::issueBook(int id) {
    for(auto &b : books) {
        if(b.getId() == id && !b.isIssued()) {
            b.issueBook();
            cout << "Book issued\n";
            return;
        }
    }
    cout << "Book not available\n";
}

void Library::saveToFile() {
    ofstream file("data.txt");
    for(auto &b : books) {
        file << b.getId() << "," << b.getTitle() << "," 
             << b.getAuthor() << "," << b.isIssued() << endl;
    }
}

void Library::loadFromFile() {
    ifstream file("data.txt");
    int id, issued;
    string title, author;

    while(file >> id) {
        file.ignore();
        getline(file, title, ',');
        getline(file, author, ',');
        file >> issued;

        books.push_back(Book(id, title, author, issued));
    }
}