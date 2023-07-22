#include <iostream>
#include <string.h>
using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char student[100];
    char borrow[100];
    char giveback[100];
    int warning[100];
};

int main()
{
    
    
    Library lib[20];
    int count = 0;
    int input = 0;

    while (input != 3)
    {
        cout<<"---- ----- //LIBRARY MANAGEMANT SYSTEM// ---- ----"<<endl;
        cout<<"---- -----   ------  ---------  ------   ---- ----"<<endl;
        cout << "1. Enter 1 to input detail like STUDENT NAME, BOOK NAME, BOOK ID, BORROW DATE, RETURN DATE" << endl;
        cout << "2. Enter 2 to display details:" << endl;
        cout << "3. Enter 3 to quit" << endl;
        cin >> input;

        switch (input){
        
        case 1:
        {

            cout << "1. Enter Student Name: " << endl;
            cin.ignore(); 
            cin.getline(lib[count].student, 100, 't');
            cout << "2. Enter Book Id: " << endl;
            cin >> lib[count].id;

            cout << "3. Enter book name: " << endl;
            cin.getline(lib[count].name, 100, 't');

            cout << "4. Enter the book borrow date: ";
            cin.getline(lib[count].borrow, 100, 't');

            cout << "5. Enter the return date:" << endl;
            cin.getline(lib[count].giveback, 100, 't');

            count++;
            break;
        }

        case 2:
        {
            for (int i = 0; i < count; i++)
            {
                cout << "1.Student Name: " << lib[i].student << endl;

                cout << "2.Book Name: " << lib[i].name << endl;

                cout << "3.Book Id: " << lib[i].id << endl;

                cout << "4.Borrow Date: " << lib[i].borrow << endl;

                cout << "5.WARNING:Return date should be under 14 days" << lib[i].warning << endl;

                cout << "6.Your Return Date will be: " << lib[i].giveback << endl;
            }
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        
       
        }
    }
    return 0;
}
