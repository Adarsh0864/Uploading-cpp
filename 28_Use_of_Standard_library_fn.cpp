#include<iostream>
#include<cmath>
using namespace std;

int squareRoot(int num1){
      return sqrt(num1);
}
int main(){
    int num1, num2;
    cout<<"Enter the no whose square root you waana find : ";
    cin>>num1;

    cout<<"Square root of the input number is : "<<squareRoot(num1);
    
    return 0;
}



// ANd if we wanna find the power then -->

#include<iostream>
#include<cmath>
using namespace std;

int Power(int num1, int num2){
    return(num1, num2);
}
int main(){
    int num1, num2;
    cout<<"Enter the base no : ";
    cin>>num1;
    cout<<"Enter the power no : ";
    cin>>num2;

    cout<<"Your answer will be : "<<pow(num1 , num2);
    return 0;
}


// To find power directly we use this method:-->
#include<iostream>

using namespace std;

int main(){
    int a, b;
    b=4;
    a=2;
    int power= pow(b,a);


    cout<<"The power of following given no is : "<<pow(b,a);
    

    
    return 0;
}


// Now 2nd method -->
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int base, power;
    cout<<"Enter the value of base : ";
    cin>>base;
    cout<<"Enter the value of power : ";
    cin>>power;
    
    int answer= pow(base,power);


    cout<<"The power of following given no is : "<<pow(base,power);
    

    
    return 0;
}