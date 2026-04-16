#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool issued;

public:
    Book(int i=0, string t="", string a="", bool is=false);

    int getId();
    string getTitle();
    string getAuthor();
    bool isIssued();

    void issueBook();
    void returnBook();
    void display();
};

#endif