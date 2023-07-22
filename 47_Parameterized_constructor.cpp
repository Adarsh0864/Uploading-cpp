#include<iostream>
using namespace std;

class Complex 
{
    int a , b;

    public : 
    Complex(int x , int y);

    void printNumber()
    {
        cout<<"You number will be "<<a<< " + "<< b << "i" << endl;
    }
};

Complex :: Complex(int x , int y) // This is parameterized constructor.
{
    a = x;
    b = y;
}
int main(){
    // Implicit Call->
    Complex a(4, 6);
    a.printNumber();

    // Explicit Call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}









/// Another Example :=

#include<iostream>
using namespace std;

class Point {
    int x , y;
    public:
    Point(int a , int b)
    {
        x = a ;
        y = b ;
    }
    void displayPoint(){
        cout<<"The Point is : ("<<x<<","<<y<<")"<<endl;
    }
};


int main(){

    Point p(1,1);
    p.displayPoint();

    Point q(4,6);
    q.displayPoint();
    
    
    return 0;
}