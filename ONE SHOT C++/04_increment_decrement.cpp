#include<iostream>;
using namespace std;
int main(){
    int c = 4;
    c++;//{This means that c is increased by 1 and answer will be 5}
    cout<<c<<endl;
    return 0;
}


/////But if we use pre increment like this then output will be:
#include<iostream>;
using namespace std;
int main(){
    int c = 4;
    
    cout<<c++;//{Here the value will be 4}
    return 0;
}


////{When we are using the pre increment operator.}
#include<iostream>;
using namespace std;
int main(){
    int x =4;
    cout<<++x<<endl;//{The answer will be 5 }
    cout<<x;
    return 0;
}