#include<iostream>
using namespace std;


union money /// here we have used union(It is used to have better memory management and we can call any set of data type at a time).
{
    int rice;
    char car;
    float pounds;
};

int main() {
      enum meal{breakfast,lunch,dinner};                   // In enum we use to store data in sequence integer form 
       meal M1= lunch;
       meal M2= breakfast;
       meal M3= dinner;
       cout<< "The value of M1 :"<<M1<<endl;
       cout<< "The value of M2 :"<<M2<<endl;
       cout<< "The value of M3 :"<<M3<<endl;

     return 0;
}


