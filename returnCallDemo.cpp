//Program to show return statement can be used to call 
//a function from within a function
#include <iostream>
using namespace std;

int sum(int i, int j) {
    return i + j;
}

int sumSquares(int i, int j) {
    return sum(i*i, j*j); // call to a function sum()
}

int main() {
    int a = 3, b = 4;
    cout << "Sum of squares of " << a << " and " << b << " is: " << sumSquares(a, b) << endl;
    return 0;
}