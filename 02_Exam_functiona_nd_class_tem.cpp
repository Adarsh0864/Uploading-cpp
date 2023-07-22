#include<iostream>;
using namespace std;
 template<typename T>
 T add(T num1, T num2){
return num1+num2;
 }
 int main(){
    int x = 5, y =10;
    double a = 3.14, b = 2.71;
 
    cout<<"Sum of "<<x<<"and "<<y<<" is "<<add(x,y)<<endl;
    cout<<"Sum of "<<a<<"and "<<b<<" is "<<add(a,b)<<endl;
    return 0;
 