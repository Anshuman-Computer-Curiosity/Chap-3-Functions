#include<iostream>
using namespace std;
#include "myheader2.h"
int globalVar = 10;
void func1(){
    x = 25;
    cout<<"x in func1() = "<<x<<endl;
}
int add(int a, int b) {
    return a + b;
}