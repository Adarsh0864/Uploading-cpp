// Function is used for working with tukde, apne program ko tukdo me tod do and then program kro.
#include<iostream>
using namespace std;

int sum(int a , int b){
        int c = a+b;
                               // Here function is defined above the main function.
    }                               
    int subtract(int a , int b){
      int c = a-b;
    }
    
    int add(int a, int b, int c){   // We can declare muliple function by the same name but differentiating factor will be parameter.
      int d = a+b+c;
    }


    int divide(int  a , int b){
      int c = a/b;
    }

int main(){
  int num1, num2, num3;
  cout<<"Enter first no:"<<endl;
  cin>>num1;
  cout<<"Enter second no:"<<endl;
  cin>>num2;
   cout<<"Enter third no:"<<endl;
   cin>>num3;

  cout<<"Sum will be : " <<sum(num1, num2)<<endl;
  cout<<"Substraction will be : " <<subtract(num1, num2)<<endl;
  cout<<"Add will be : " <<add(num1, num2, num3 )<<endl;
  cout<<"DIvide will be : " <<divide(num1, num2)<<endl;
    return 0;
}