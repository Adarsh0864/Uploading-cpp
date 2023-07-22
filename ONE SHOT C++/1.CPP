#include<iostream>
using namespace std;
int main(){
    cout<<7+3; // {The output will be 10 because we dont have use the semicolon.}
    return 0;
}

/////////////Now next/////////

#include<iostream>;
using namespace std;
int main(){
    cout<<"7+3";// {If we print this then it will print same as 7+3, because it is under the semicolon}
    return 0;
}


//////
#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int y;
    y = x;
    x = 7;
   
    cout<<x<<endl;
    
}