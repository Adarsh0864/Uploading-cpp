#include<iostream>
using namespace std;

typedef struct employee {
    int ID;
    char favChar;
    float salary;
}ep;

union money /// here we have used union(It is used to have better memory management and we can call any set of data type at a time).
{
    int rice;
    char car; 
    float pounds;
};

int main() {
  ep Adarsh;
  union money m1;
  m1.rice=34;
 m1.car='a';
  m1.rice=34;
 cout<<m1.rice;  // (If we write here m1.rice or m1.car in cout then we get the garbage value so we need to write m1.rice because it get overwrite).
    return 0;
}
