#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=(n-i);j++){  // This is for printing the space
            cout<<" ";
        }

        for(int j = 1; j<=(2*i-1); j++){ // This is for printing the stars.
            cout<<"*";
        }

        cout<<endl;

    }
    
    return 0;
}