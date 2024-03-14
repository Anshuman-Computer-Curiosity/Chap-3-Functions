#include<iostream>
#include "myheader4.h"
using namespace std;
int func2(){
    extern int x;
    x = x * 10;
    cout<<"In func2, (after) x = "<<x<<endl;
    return x;
}