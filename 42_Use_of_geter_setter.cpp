#include <iostream>
using namespace std;

class Hero
{
 private:
    int health;
    private:
    char level;

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
int main()
{
    Hero ramesh;
    ramesh.setHealth(70);
    ramesh.setLevel('a');
   cout<<"Ramesh Health is : "<<ramesh.getHealth()<<endl;
   cout<<"Ramesh level is : "<<ramesh.getLevel()<<endl;

   

    return 0;
}