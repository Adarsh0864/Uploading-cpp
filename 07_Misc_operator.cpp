#include<iostream>
#include<iomanip>
using namespace std;

int main() {

//     int a = 4;
//    cout<<sizeof(a)<<endl;

//    char name = 'a';
//    cout<<sizeof(name)<<endl;

//    bool flag;
//    a==name?flag = true : flag = false;
//    cout<<flag<<endl;

//    cout<<(&a)<<endl;

//    // Post Decrement and pre decrement operator

//    int c= 4;
//    cout<<(c++)<<endl; // Answer will be 4

//    int d = 5;
//    cout<<(--d)<<endl; // Answer will be 4

   // ManipuLtors is C++-->

//    int a =2, b = 78, c= 1222;

//    cout<<"The Value of A without setw is :"<<a<<endl;// Answer-->The Value of A without setw is :2
   
//    cout<<"The Value of b without setw is :"<<b<<endl;//The Value of b without setw is :78
   
   
//    cout<<"The Value of c without setw is :"<<c<<endl;//The Value of c without setw is :1222


//      cout<<"The Value of A  is :"<<setw(4)<<a<<endl;//The Value of A  is :   2

//        cout<<"The Value of b  is :"<<setw(4)<<b<<endl;//The Value of b  is :  78

//          cout<<"The Value of c is :"<<setw(4)<<c<<endl;//The Value of c is :1222.
   

     //Operator Precedence-->

     int a = 3, b = 4;

     int c = ((((a*5)+b)-45)+87);  // Answer will be 61 First multiply Second substract and Third add
     cout<<c;

   return 0;
}
