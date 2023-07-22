#include<iostream>
using namespace std;

int product(int a ,int b){
    static int c = 0;// This is used for only one time.
    c = c + 1;  // Next time this thing will be called.
    return a*b+c;
}
int main(){
int a, b;
cout<< "Enter the value of a and b : ";
cin>>a>>b;
    cout<<"The answer will be become: " <<product(a,b)<<endl;
    cout<<"The modified value  will be : " <<product(a,b)<<endl;
    cout<<"The modified value  will be : " <<product(a,b)<<endl;
    cout<<"The modified value  will be : " <<product(a,b)<<endl;
    return 0;
}