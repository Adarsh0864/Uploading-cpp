#include<iostream>
using namespace std;
int sum(int a , int b){
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int sum(int a , int b , int c ){
    cout<<"Using parameter of 3 arguments"<<endl;
    return a+b+c;
}

// Volume of cylinder:
int volume(double r , int h){
    return(3.14*r*r*h);
}


int main(){
    cout<<"THe sum of 3 And 6 is "<< sum(3,6)<<endl;
    cout<<"The sum of 3 , 7 and 6 is "<< sum(2,7,6)<<endl;
    cout<<"The  volume of cylinder is "<< volume(2,5)<<endl;
    return 0;
}