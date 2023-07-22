#include <iostream>
using namespace std;

class Hero
{
 private:
    int health;
    public:
    char level;

    Hero(){  // This is constructor.
        cout<<"Constructor called "<<endl;
    }

    Hero(int health) {
        cout<<"this -> "<< this <<endl;
        this -> health = health;
    }

   
    public:

    void print()
    {
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    Hero Ramesh(10);
    cout<<"Adress of Ramesh "<< &Ramesh<<endl;
    Ramesh.getHealth();
}