#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // static allocation
    Hero a;
    cout << "level is " << a.level << endl;
    cout << "Health is " << a.getHealth() << endl;

    // Now Dynamically-->
    Hero *b = new Hero;
    cout << "Level is " << (*b).level << endl;
    cout << "Health is " << (*b).getHealth() << endl;
    }