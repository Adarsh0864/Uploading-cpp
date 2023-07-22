#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
        void setHealth(int h) {
            health = h;
        }

        void setLevel(char ch){
            level = ch;

        }
    
};

int main(){

    //Creation of Object
    Hero Adarsh;
    cout<<"Adarsh health is"<<Adarsh.getHealth()<<endl;
    // Use of setter // Use of setter is use to put any condition. 
    Adarsh.setHealth(70);
    Adarsh.level='A';

    cout<<"health is:"<<Adarsh.getHealth()<<endl;
    cout<<"level is :"<<Adarsh.getLevel()<<endl;

    return 0;

}

    // Learn use of padding and greedy alingment 