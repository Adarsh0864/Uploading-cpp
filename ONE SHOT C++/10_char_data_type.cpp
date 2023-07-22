#include<iostream>;
using namespace std;
int main(){
    /// When we are showing character data type then we need to use the '' colon for the use of it.
    //For using a whole passage we need to use the string data type.
    char ch = 'a';
    cout<<"a";
    return 0;
}
/// ASDCII value and Typecasting:

#include<iostream>;
using namespace std;
int main(){
    
    char ch = 'a';
    int ascii = (int)ch;
    cout<<ascii;//{ASCII stands for American Standard Code for Information Interchange. It is a character encoding standard for electronic communication. 
    //ASCII codes represent text in computers, telecommunications equipment, and other devices1. 
    //Each character variable is assigned with some number range from 0 to 1272.
    // For example, the ASCII value of ‘A’ is 652.}
    return 0;
}