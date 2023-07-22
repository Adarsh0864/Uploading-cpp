#include <iostream>
using namespace std;

class Hero
{
 private:
    int health;
    public:
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

int main(){

    Hero a;// Static Allocation.
    a.setHealth(90);
    a.setLevel('a');
    cout<<"Level is : "<<a.level<<endl;
    cout<<"Health is : "<<a.getHealth()<<endl;

    Hero *b = new Hero; // Dynamic allocation
    b->setHealth(90);
    b->setLevel('a');
    cout<<"Level is : "<<(*b).level<<endl;
    cout<<"Health is : "<<(*b).getHealth()<<endl;

    // Another way of indicating -->
     cout<<"Level is : "<<b->level<<endl;
    cout<<"Health is : "<<b->getHealth()<<endl;




}