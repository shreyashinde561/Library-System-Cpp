#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(int i, string t, string a, bool is) {
    id = i;
    title = t;
    author = a;
    issued = is;
}

int Book::getId() { return id; }
string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
bool Book::isIssued() { return issued; }

void Book::issueBook() { issued = true; }
void Book::returnBook() { issued = false; }

void Book::display() {
    cout << id << " | " << title << " | " << author 
         << " | " << (issued ? "Issued" : "Available") << endl;
}