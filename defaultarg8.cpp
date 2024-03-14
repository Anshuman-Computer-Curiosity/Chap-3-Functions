// Issues with func. overloading when using default arguments
#include <iostream>
using namespace std;

int func(double num);
int func(double x, int y);
int func(double a, int b = 5);

int main() {
    //cout << func() << endl;
     //cout << func(3.5,21) << endl;
    cout << func(8.7) << endl;
    return 0;
}

int func(double num) {
    return 2 * num;
}

int func(double x, int y) {
    return x * y;
}

int func(double a, int b) {
    return a + b;
}