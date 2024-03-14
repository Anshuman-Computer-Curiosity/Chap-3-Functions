#include <iostream>
using namespace std;

int a (double) { 
    cout << "F1- int a (double)" << endl; 
}
void b () { cout << "F2 - void b ()" << endl; }
void b (int) { cout << "F3 - void b (int)" << endl; }
double c (double) { cout << "F4 - double c (double)" << endl; }
double b (float) { cout << "F5 - double b (float)" << endl; }
double b (double,double =1.5) { cout << "F6 - double b (double,double =1.5)" << endl; }
void c (int, double) { cout << "F7 - void c (int, double)" << endl; }
void a (char, int) { cout << "F8 - void a (char, int)" << endl; }

int main() {
    c(10.8f); 
    return 0;
}