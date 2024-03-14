#include <iostream>
using namespace std;
// Function decl.
int add(int x, int y);

// Another function decl. with a different return type
double add(double x, double y);

int main() {
    int a = 2, b = 3;
    double c = 2.5, d = 3.5;

    // Call the function with int arguments
   cout << a << " + " << b << " = "<<add(a, b)<<endl;

    // Call the function with double arguments
    cout << c << " + " << d << " = " << add(c, d) << std::endl;

    return 0;
}

// Function definition for add(int, int)
int add(int x, int y) {
    return x + y;
}

// Function definition for add(double, double)
double add(double x, double y) {
    return x + y;
}