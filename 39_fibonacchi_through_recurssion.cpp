#include<iostream>;
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int number ;
    cout<<"Enter the Number : ";
    cin>>number;
    cout<<"The term in fibonacci sequence at position " <<number<< " is "<< fib(number)<<endl;

    return 0;
}