#include<iostream>
using namespace std;

int c = 45;//THis is a global variable(Variables that are created outside of a function are known as global variables. Global variables can be used by everyone, both inside of functions and outside.)


int main(){
    int a , b , c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is"<<c<<endl;
    cout<<"The global c is "<<::c; //(::This is used to call global variable)



    float d = 34.4; //(by default the c ++ compiler states point number as double)
    long double e = 34.4;//(So we use 34.4f to make it a float data type,we will get to notice these thing in operator overloading)

    cout<<"The value of d is"<<d<<endl<<"The value of e is "<<e;

    return 0;
}