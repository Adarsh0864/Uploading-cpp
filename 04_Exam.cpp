#include<iostream>
#include<exception>
using namespace std;
int main(){
    try {
        throw 'a';
    }
    catch(int x)
    {
        cout<<"Error";
    }
    catch(char x)
    {
        cout<<"Hello World";
    }
        return 0;
    }
    
    