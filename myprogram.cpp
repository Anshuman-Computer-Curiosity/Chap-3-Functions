#include<iostream>
#include "myheader.h"
using namespace std;
using namespace N;
int main(){
    MyClass mObj;
    int x = mObj.add(5,6);
    int y = mObj.add(3,2);
    int z = mObj.multiply(x,y);
    cout<<z<<endl; 

    return 0;
}