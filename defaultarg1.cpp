// program to make use of default arguments in functions
#include<iostream>
double calcSimpleInt(double p, double r, double = 1.0); //func. decl
double calcSimpleInt(double p, double r = 5.5, double= 2.0); //func. decl
using namespace std;
int main(){
   double s;
   s = calcSimpleInt(10000,6.0); //calcSimpleInt(10000,6.0,1.0);
   cout<<"Simple Interest = "<<s;
   s = calcSimpleInt(10000); //calcSimpleInt(10000,6.0,1.0);
   cout<<"Simple Interest = "<<s;

   return 0;
}

 double calcSimpleInt(double p, double r, double t){
    double simpleInt = (p*r*t)/100;
    return simpleInt;
 }