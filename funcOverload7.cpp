//Ambiguity in Overloaded functions
#include<iostream>
using namespace std;

// void f4(double, double = 1.5) { cout << "f4(double,double)" <<endl; }
// void f4(double) { cout << "f4(double)" <<endl; } 

// int f5(int a) { 
//     cout << "f5(" <<a<<")" << endl; 
//     return a;
// }
// double f5(int a) { 
//     cout << "f5(" <<a<<")" << endl; 
//     return (double)a;
// }

// void f6(float) { cout << "f6(float)" <<endl; }
// void f6(long double) { cout << "f6(long double)" <<endl; } //Make it double

void f7(int a, char b){ cout << "f7(int a, char b)" <<endl; }//F1
void f7(char a, int b){ cout << "f7(char a, int b)" <<endl; }//F2 

int main(){
    // f4(10.5); //ambigious

    // f5(6); //ambigious
    //  f6(10.5); //ambigious
    f7(1,1);//ambigous
    return 0;
}