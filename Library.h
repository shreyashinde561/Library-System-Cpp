#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
using namespace std;

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book b);
    void displayBooks();
    void searchBook(int id);
    void deleteBook(int id);
    void issueBook(int id);

    void saveToFile();
    void loadFromFile();
};

#endif