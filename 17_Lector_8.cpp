#include<iostream>
using namespace std;

int main(){
    int a = 34;
    cout<<"The value of a was : "<<a<<endl;

    a = 45;
    cout<<"The value of a is :"<<a;

}



     // constants in c++ to stop the further change in the program:

    #include<iostream>
using namespace std;

int main(){

    const float a = 3.11;
    cout<<"The value of a was : "<<a<<endl;
    a = 45.5;
    

}






// Use of Manipulators:






#include<iostream>
#include<iomanip>  //(By using this we can use setw, which is used to set the field width ) 
using namespace std;

int main(){
    int a = 3, b =74, c = 1233;
    cout<<"The value of a is :"<<setw(4)<<a<<endl;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of c is :"<<setw(4)<<c<<endl;

    cout<<"The value of a without setw is :"<<a<<endl;
    cout<<"The value of b without setw is :"<<b<<endl;
    cout<<"The value of c without setw is :"<<c<<endl;

}
    // So by this this setw program we get that we can use it to make distances in answer as it shows in terminal.

    
