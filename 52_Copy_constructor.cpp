#include<iostream>
using namespace std;

class Number {
    int a;
    public:
    Number(){};
    Number(int num){
        a = num;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }

    
};
int main(){
    Number x , y, z(45);
    
    return 0;
}