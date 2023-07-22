#include<iostream>;
using namespace std;
int main(){
    //Pointers are those which hold the address of other data type.

    int a = 3;
    int* b = &a;  //{ Where *is the derefrencing operator.}
    cout<<b;
    
    
    



                 //Pointer to pointer variable-->
   int** c = &b;
   cout<<"The address of b is "<<&b<<endl;
   cout<<"The address of b is "<<c<<endl;
   cout<<"The value at address c is "<<*c<<endl;
   cout<<"The value at address value at(c)is "<<**c<<endl;

   return 0;

}

