// Constructor invoke when we create an object.
// LIke for Hero Ramesh The default constructor which will be called is ramesh.hero.
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

    
    cout<<"Hey lets see which is called first."<<endl;
    Hero a;// Static Allocation.
    cout<<" Now another one "<<endl;
    Hero *h = new Hero; // Dynamically calling.
    
}