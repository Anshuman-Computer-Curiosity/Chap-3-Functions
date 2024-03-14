#include <iostream>
using namespace std;

void func(int x, int y = 5);
void func(double x, double y = 5.5);

int main() {
    int a = 10, b = 20;
    double c = 3.24, d = 7.56;

    // call func with one argument
    func(a); // uses default argument
    func(c); // uses default argument

    // call func with two arguments
    func(a, b); // uses user-supplied argument
    func(c, d); // calls func(double, double)

    return 0;
}

void func(int x, int y) {
    cout << "func(int, int): x = " << x << ", y = " << y << endl;
}

void func(double x, double y) {
    cout << "func(double, double): x = " << x << ", y = " << y << endl;
}