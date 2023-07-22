#include<iostream>;
using namespace std;
int main(){
    //Pointers are those which hold the address of other data type.

    int a = 3;
    int* b = &a;  //{Here b is a pointer which store the address of a }
    cout<<b;
    /// & --> THis show the address of operator.
    /// * --> THis show the Derefrence operator.
    
    cout<<"The address of a is :"<<a<<endl;
    
    cout<<"The address of a is :"<<b<<endl;

      // Now defrence operator--> we use this to know that what is stored in some variable:
      // Like what could be stored in b if we want to know then we use derefrence operator.
      cout<<"The value of address of b is :"<<*b<<endl;

            
}