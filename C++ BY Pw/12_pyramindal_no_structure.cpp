#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int rows =1 ; rows<=n; rows++){
        for(int coloumn = 1 ; coloumn<= (n-rows); coloumn++){
            cout<<" ";
        }
        for(int coloumn = 1 ; coloumn<=rows; coloumn++){
            cout<<coloumn;

        }
        for(int coloumn =(rows-1); coloumn>=1; coloumn--){
            cout<<coloumn;
        }
        cout<<endl;
    }
    return 0;
}