#include<iostream>
using namespace std;

struct employee {
    int ID;
    char favChar;
    float salary;
};

int main() {
    struct employee Adarsh;
    Adarsh.ID = 1;
    Adarsh.favChar = 'c';
    Adarsh.salary = 10000000;

    cout << "The value of Adarsh.ID: " << Adarsh.ID << endl;
    cout << "The value of Adarsh.favChar: " << Adarsh.favChar << endl;
    cout << "The value of Adarsh.salary: " << Adarsh.salary << endl;

    return 0;
}

// After using Typedef--> keyword(It is used to create an additional name (alias) for another data type)

#include<iostream>
using namespace std;

typedef struct employee {
    int ID;
    char favChar;
    float salary;
}ep;

int main() {
    ep Adarsh;
    Adarsh.ID = 1;
    Adarsh.favChar = 'c';
    Adarsh.salary = 10000000;

    cout << "The value of Adarsh.ID: " << Adarsh.ID << endl;
    cout << "The value of Adarsh.favChar: " << Adarsh.favChar << endl;
    cout << "The value of Adarsh.salary: " << Adarsh.salary << endl;

    return 0;
}
