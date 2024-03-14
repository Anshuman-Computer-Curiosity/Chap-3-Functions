#include<iostream>
using namespace std;

extern "C" {  
    int global_var; // Declare global variable with C linkage
}
extern "C" {
    int add(int a, int b);
}
int subtract(int a, int b) {  // C++-style function declaration
    return a - b;
}

int main() {
    int x = add(2, 3);      // Call add() using C linkage
    int y = subtract(5, 2); // Call subtract() using C++ linkage
    // Set the global variable using C linkage
    global_var = 10;

    cout<<"add(2,3) = " <<x<<endl;
    cout<<"subtract(5,2) = " <<y<<endl;
    cout << "global_var = " << global_var << endl;
    return 0;
}

// C-style function definition
int add(int a, int b) {
    return a + b;
}