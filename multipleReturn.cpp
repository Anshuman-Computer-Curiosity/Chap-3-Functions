//Program to show use of multiple return statement in function body
//also it shows return is not last statement
#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
             return c;
    }
}

int main() {
    cout << "Max of (8, 5, 3): " << max(8, 5, 3) << endl;
    return 0; //optoinal
}