#include <iostream>
using namespace std;

// Taking example by swaping variable:-->

void swap(int a, int b)
{                 // Here value of|| temp||  a||  b||
    int temp = a; //        Earlier case->  4       4    5
    a = b;        //   In this case :>    4       5    5
    b = temp;     // Now the value -->    4       5    4
}

int main()
{

    int x = 4, y = 5;
    cout << "The value of x is " << x << "and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value fo x is " << x << " and the value of y is " << y << endl;

    return 0;
}



// The code which we have write upahead will cant swap the values, so our new method in which we pass out the address, through pointer:



#include <iostream>
using namespace std;

// Taking example by swaping variable:-->

void swap(int *a, int *b)
{                  // Here value of|| temp||  a||  b||
    int temp = *a; //        Earlier case->  4       4    5
    *a = *b;       //   In this case :>    4       5    5
    *b = temp;     // Now the value -->    4       5    4
}

int main()
{

    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value fo x is " << x << " and the value of y is " << y << endl;

    return 0;
}



// Calling by "reference" using c++ reference variable:




#include<iostream>
using namespace std;



void swapRefrenceVar(int &a , int &b ){  // Here by using ampercent the value of a become b and b become a .
    int temp = a;         
    a = b;            
    b = temp;         
}

int main(){

    int x = 4 , y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapRefrenceVar(x,y);                      // Here a point "x", and b point "y".
    cout<<"The value fo x is "<<x<<" and the value of y is "<<y<<endl;

    
    return 0;
}




