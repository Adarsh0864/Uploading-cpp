#include<iostream>
using namespace std;
int main(){
// Typecasting--> The conversion of one data type to another data type.

int a = 45;
float b = 45.46;
cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is "<<float(a)<<endl;

cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;
int c = int(b);


cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b<<endl;
}  // Date--> 1/4/2023