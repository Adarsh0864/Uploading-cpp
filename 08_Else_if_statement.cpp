#include<iostream>
using namespace std;

int main() {

    int age;

    cout<<"Tell me your Age:"<<endl;
    cin>>age;

    // if(age<18 && age>1){
    //     cout<<"You can not come to the Party"<<endl;
    // }
    //     else if(age==18){
    //         cout<<"You can come in party with a special pass"<<endl;
    //     }
    //     else if(age<1){
    //         cout<<"You are not yet born"<<endl;
    //     }

    //     else{
    //         cout<<"You can come to the Party"<<endl;
    //     }

    //USing switch case-->

    switch(age) {
        case 18 :
        cout<<"You are 18";
        break;

        case 22 :
        cout<<"You are 22"<<endl;
        break;

        case 2 :
        cout<<"You are 2"<<endl;
        break;

        default:
        cout<<"No special Cases"<<endl;
    }
    
    

        return 0;
    
}