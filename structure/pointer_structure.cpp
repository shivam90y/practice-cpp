#include <iostream>
#include <string.h>
using namespace std;
void printBook(struct Book *book);
struct Book
{
    char title[40];
    char author[50];
    char subject[60];
    int book_Id = 578490;
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
    printBook(&book1);
    printBook(&book2);
    return 0;
}
void printBook(struct Book *book)
{
    cout << "book title:" << book->title << endl;
    cout << "book author:" << book->author << endl;
    cout << "book subject:" << book->subject << endl;
    cout << "book book_Id:" << book->book_Id << endl;
}