#include <iostream>
#include <string.h>
using namespace std;
struct Book
{
    char title[50];
    char author[60];
    char subject[80];
    int book_Id;
};
int main()
{
    struct Book book1;
    struct Book book2;
    strcpy(book1.title, "Learn c++ programming");
    strcpy(book1.author, "Rabindra nath");
    strcpy(book1.subject, "c++ programming");
    book1.book_Id = 299448;
    strcpy(book2.title, "Learn c programming");
    strcpy(book2.author, "Devdas");
    strcpy(book2.subject, "c programming");
    book2.book_Id = 488884;
    cout << "book1 title:" << book1.title << endl;
    cout << "book1 author:" << book1.author << endl;
    cout << "book1 subject:" << book1.subject << endl;
    cout << "book1 Id:" << book1.book_Id << endl;
    cout << "book2 title:" << book2.title << endl;
    cout << "book2 author:" << book2.author << endl;
    cout << "book2 subject:" << book2.subject << endl;
    cout << "book Id:" << book2.book_Id << endl;
    return 0;
}