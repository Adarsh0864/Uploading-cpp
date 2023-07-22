#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char student[100];
    char borrow[100];
    char giveback[100];
    int warning;
};

int main()
{

    Library lib[20];

    int count = 0;
    int input = 0;

    while (input != 3)
    {
        cout << "Enter 1 to input detail like STUDENT NAME, BOOK NAME, BOOK ID, BORROW DATE, RETURN DATE" << endl;
        cout << "Enter 2 to display details:" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;

        switch (input)
        {
        case 1:
        {

            cout << "Enter Student Name: " << endl;
            cin.ignore(); // to discard the newline character in the input buffer
            cin.getline(lib[count].student, 100, '$');

            cout << "Enter Book Id: " << endl;
            cin >> lib[count].id;

            cout << "Enter book name: " << endl;
            cin.getline(lib[count].name, 100, '$');

            cout << "Enter the book borrow date: ";
            cin.getline(lib[count].borrow, 100, '$');

            cout << "Enter the return date:" << endl;
            cin.getline(lib[count].giveback, 100, '$');

            count++;
            break;
        }

        case 2:
        {
            for (int i = 0; i < count; i++)
            {
                cout << "Student Name: " << lib[i].student << endl;

                cout << "Book Name: " << lib[i].name << endl;

                cout << "Book Id: " << lib[i].id << endl;

                cout << "Borrow Date: " << lib[i].borrow << endl;

                cout << "WARNING:Return date should be under 14 days" << lib[i].warning << endl;

                cout << "Return Date: " << lib[i].giveback << endl;
            }
            break;
        }

        case 3:
        {
            exit(0);
            break;
        }

        default:
        {
            cout << "You entered a wrong input. Please try again." << endl;
            break;
        }
        }
    }
    return 0;
}
