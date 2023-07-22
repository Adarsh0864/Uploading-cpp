
#include<iostream>
using namespace std;



int & swapRefrenceVar(int &a , int &b ){   // Int & signify the int type reference value.
    int temp = a; //Using references (int &) allows the function to modify the original values of a and b directly, rather than working with copies of the values.         
    a = b;            
    b = temp;        
    return a ; 
}

int main(){

    int x = 4 , y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapRefrenceVar(x,y) = 766;                      
    cout<<"The value fo x is "<<x<<" and the value of y is "<<y<<endl;

    
    return 0;
}




// Modify both value : -->




#include<iostream>
using namespace std;



int & swapRefrenceVar(int &a , int &b ){   
    int temp = a;         
    a = b;            
    b = temp;        
    return a , b ; 
}

int main(){

    int x = 4 , y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapRefrenceVar(x,y) = 766;                      
    swapRefrenceVar(x,y) = 800;                      
    cout<<"The value fo x is "<<x<<" and the value of y is "<<y<<endl;

    
    return 0;
}

