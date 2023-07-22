#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    void print()
    {
        cout << level << endl;
    }
};
int main()
{
    Hero ramesh;

    ramesh.health = 70;
    ramesh.level= 'a';


    cout << "health is " << ramesh.health << endl;
    cout << "Level is " << ramesh.level << endl;

    return 0;
}