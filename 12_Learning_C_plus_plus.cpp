#include<iostream>
using namespace std;

int main(){
    int a = 4, b=5;
    cout<<"Operators in C++\n";
    cout<<"Following are the types of operator in C++\n";
    //Arithematic Operator
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The  value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    //THing to highlight-->When you need to select the different row at once then you must use alt+shift+cursor.
      cout<<"The value of a%b is "<<a%b<<endl;
      cout<<"The value of a++ is "<<a++<<endl;
      cout<<"The value of a-- is "<<a--<<endl;
      cout<<"The value of ++a is "<<++a<<endl;
      cout<<"The value of --a is "<<--a<<endl;


      //Assignment Operator--> used to assign values to variable:-->
    //    int a = 4, b=5;

    //Comparison Operator-->
        cout<<"The value of a == b is "<<(a==b)<<endl;

        //Logical Operator-->
        cout<<"Following are the logical operator in C++"<<endl;
        cout<<"The value of ((a==b)&&(a<b))logical operator is "<<((a==b)&&(a<b))<<endl;
//    (  || --> THis is called as Or Operator)
    //    (!(a==b) This is called as Not Operator.)
}