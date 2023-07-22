#include<iostream>
using namespace std;
int main(){
    // Question --> Count the numbers of the digits for a given number n :

    // Theorem used --> if we repeted divide the number by 10 and get the value in integer so we get the total numbers in the given array.

    int n;
    cin>>n;

    int digits = 0;
    while(n>0){
        digits++;
        n=n/10;
    }

    cout<<digits<<endl;

    return 0;
}