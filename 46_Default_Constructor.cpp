#include<iostream>
using namespace std;

class Complex{
    int a , b;
    public : 
    // Creating a constructor.
    // It is used to initilize the object of the class.
    // Special member function with same name like the class and automatically invoked whenever an object is created.
    Complex(void); // Constructor Declaration.
    void printNumber()
    {
        cout<<"Your Number is "<< a << " + "<< b << " i "<<endl;
    }
};

Complex :: Complex(void){ // THis is a default constructor.
    a = 10;
    b = 0;
}
int main(){
    Complex c;
    c.printNumber();

    
    return 0;
}
// Characteristics of Constructor->
// 1. It should be declared in public section of the Class.
//2. They are automatically invoked whenever the object is created .
//3. It can have default arguments .
//4. It can have default arguments.
//5. We can refer to their address.