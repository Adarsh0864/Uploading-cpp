#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    { // This is a constructor.// Parameterized constructor.
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber() // function.
    {
        cout << "The number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{

    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(9);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}