#include<iostream>
using namespace std;

class Hero{
    //properties:
    int value;  // In the case of empty class  where there is non properties mention then we the size will come as 1 for the identification.
};
int main(){

    Hero h1;
    //creation of object.
    
    cout<<"size : "<<sizeof(h1)<<endl;
    
    return 0;
}

 // We can also copy and call the class properties from second program like shown in 40 and 41 from here.

 #include<iostream>
 #include"41_hero.cpp"// {Here we have taken the info from the file name 41_hero.cpp}
using namespace std;// {Or we can define it here as well}.

int main(){

    Hero h1;
    //creation of object.
    
    cout<<"size : "<<sizeof(h1)<<endl;
    
    return 0;
}