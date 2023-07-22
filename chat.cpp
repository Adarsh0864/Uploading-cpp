#include<iostream>
using namespace std;

int sum(int a, int b) {
    int c = a + b;
    return c; // You need to return the result
}

int subtract(int a, int b) {
    int c = a - b;
    return c; // You need to return the result
}

int main() {
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "Sum will be: " << sum(num1, num2) << endl; // Corrected function call
    cout << "Subtraction will be: " << subtract(num1, num2) << endl; // Corrected function call

    return 0;
}
