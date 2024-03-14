//Program to return a function
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int (*addFunc(int x))(int, int) { //Pointer to function
    cout << "addFunc called with argument " << x << endl;
    return &add; //returns address of function
}

int main() {
    int (*fp_ptr)(int, int) = addFunc(42);
    cout << fp_ptr(10, 20) << endl;
    return 0;
}