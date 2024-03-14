#include<iostream>
#include "myheader4.h"
using namespace std;
int x;//define
int func1(){
   x = x + 5;
   cout<<"In func1, (after) x = "<<x<<endl;
   return x;
}