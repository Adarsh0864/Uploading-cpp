#include<iostream>;
using namespace std;
int sum(int num1, int num2){
    return num1+num2;
}
int main(){
    int num1, num2;

    cout<<"Enter the first no : ";
    cin>>num1;

    cout<<"Enter the Second no : ";
    cin>>num2;

    cout<<"The answer of addition will be : "<<sum(num1, num2);


    
    return 0;
}

// How we use cmath function : -->

#include<iostream>
#include<cmath>


using namespace std;

int main(){
    int a, b;
    b=4;
    a=2;
    int power= pow(b,a);


    cout<<"The power of following given no is : "<<pow(b,a);
    

    
    return 0;
}