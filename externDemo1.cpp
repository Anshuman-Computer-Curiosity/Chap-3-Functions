#include<iostream>
using namespace std;
#include "myheader4.h"
int main() {
    extern int x;
    cout<<"In main, initial x = "<<x<<endl;
    x = func1()+func2();
    cout<<"In main, x = "<<x<<endl;
    x = func1()+func2();
    cout<<"In main, final x = "<<x<<endl;
    return 0;
}
