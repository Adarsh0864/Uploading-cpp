#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age>18){
        cout<<"You are not coming to the party"<<endl;
    }
    else if(age==18){
        cout<<"You can come to the Party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born";
    }
    else{
        cout<<"You can come to the party"<<endl;
    }

    return 0;
}


//Using switch case -->
#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Tell me your age"<<endl;
        cin>>age;


    switch(age)
    {
        case 18:
        cout<<"You are 18";
        break;

        case 20:
        cout<<"You are 18";
        break;

        case 22:
        cout<<"You are 18";
        break;

        default:
        cout<<"No special cases"<<endl;
        break;
    }
}