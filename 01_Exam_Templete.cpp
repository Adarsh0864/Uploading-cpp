#include<iostream>

using namespace std;

template<class T>
void show(T a, T b)
{
    cout<< "A="<<a<<endl<<"B="<<b<<endl;
}
void main(){
    int p=10,q=20;
    show(p,q);

}
    

