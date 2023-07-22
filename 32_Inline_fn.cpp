#include<iostream>
using namespace std;

inline int product(int a , int b){   // Inline is a request to the compiler to make a function as an inline function , to reduce the overhead and time consumption of function calling.
    return a*b;   //  Inline execute faster than normal fucntion.
}                 // Inline function should contain a single instruction otherwise it will be not treated as inline fucntion.
int main(){
    int a , b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    
    return 0;
}



// 2nd Example:



#include<iostream>
using namespace std;
inline int fun(int a , int b){
    return (a>b)?a:b;  // If a greater than b then a will print and if b greater than a then b will print
}

int main(){
    cout<<"The max value will be "<<fun(10,20);  // we get 20.
    
    return 0;
}