#include<iostream>
using namespace std;

int main(){
    for(int i = 0 ;i<40; i++)
    {
        cout<<i<<endl;
    }

    return 0;
}

//  while loop-->

#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

   return 0;
}

//   Do while-->

#include<iostream>
using namespace std;

int main(){
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<40);   //  The major difference is in the case of do while loop the loop will run for atleast one time.

    return 0;
} 