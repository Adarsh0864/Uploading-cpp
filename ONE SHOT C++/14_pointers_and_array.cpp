#include<iostream>;
using namespace std;
int main(){
    int marks[4]= {23, 45, 56, 89};
    /*for(int i =0; i<4; i++)
    {
        cout<<"The values of marks "<<i<<" is "<<marks[i]<<endl;*/

        //Pointers and array:
        int *p = marks;
        cout<<"The value of marks[0] is "<<*p<<endl;
        cout<<"The value of marks[0] is "<<*(p+1)<<endl;
        cout<<"The value of marks[0] is "<<*(p+2)<<endl;
        cout<<"The value of marks[0] is "<<*(p+3)<<endl;

    
    return 0;
}