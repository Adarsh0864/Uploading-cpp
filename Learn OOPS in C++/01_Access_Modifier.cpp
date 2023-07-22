#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string Company;
    string Age;

    void IntroduceYourself()
    {
        cout << "Name - " << name << endl;
        cout << "Company - " << Company << endl;

        cout << "Age - " << Age << endl;
        
    }
};
int main()
{
    Employee employee1;
    employee1.name = "Adarsh";
    employee1.Company = "Google";
    employee1.Age = "19";
    employee1.IntroduceYourself();
}