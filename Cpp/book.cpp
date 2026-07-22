#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    string author;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void displayBook()
    {
        cout << "\nBook ID    : " << bookID << endl;
        cout << "Book Name  : " << bookName << endl;
        cout << "Author     : " << author << endl;
    }

    int getBookID()
    {
        return bookID;
    }
};

int main()
{
    Book books[10];
    int searchID;
    bool found = false;


    for (int i = 0; i < 10; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        books[i].addBook();
    }

    cout << "Enter Book ID to Search: ";
    cin >> searchID;

    for (int i = 0; i < 10; i++)
    {
        if (books[i].getBookID() == searchID)
        {
            cout << "\nBook Found!" << endl;
            books[i].displayBook();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nBook ID not found!" << endl;
    }

    return 0;
}