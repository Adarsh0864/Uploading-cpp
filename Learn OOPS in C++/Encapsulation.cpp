#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    string age;

    void IntroduceYourself() {
        cout<< "Name - "<<name<< endl;
        cout<< "Company - "<<company<<endl;
        cout<<"Age"<<age<<endl;
    }
};
int main(){
    Employee employee1;
    employee1.name = "Adarsh";
    employee1.company = "Google";

}
