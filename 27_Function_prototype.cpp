// Function prototype --> If we want to define a function after the function call, we need to use the function prototype.
#include<iostream>;
using namespace std;

int addNumber(int a, int b);// FUnction prototype

int main(){
    int b, a;
    cout<<"Enter first Number : "<<endl;
    cin>>a;
    cout<<"Enter second Number : "<<endl;
    cin>>b;
    
    int sum = addNumber(a,b);
    cout<<"Your sum is : "<<sum<<endl;
    return 0;
    
}

int addNumber(int a,int b){
    return a+b;
}