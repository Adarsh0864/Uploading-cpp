#include<iostream>;
using namespace std;
int main(){
    int marks[4]= {23,45,56,85};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;

    marks[2] = 455;
    cout<<"These are the marks"<<endl;

    for(int i = 0; i<4; i++)
    {
        cout<<"THe value of the marks "<<i<<"is "<<marks[i]<<endl;
    }
return 0;
}