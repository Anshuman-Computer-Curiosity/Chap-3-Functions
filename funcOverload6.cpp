//overloaded func. with same definition and differ in paramter type
#include <iostream>
using namespace std;

template<typename T> //function template
T sum(T x, T y) {
    return x + y;
}

int main() {
    int a = 10, b = 20;
    double d1 = 3.5, d2 = 1.5;

    cout << "Sum of integers: " << sum(a, b) << endl;
    cout << "Sum of doubles: " << sum(d1, d2) << endl;
    return 0;
}