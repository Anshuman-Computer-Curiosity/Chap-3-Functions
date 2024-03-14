//using global variable instead of global variable - to overcome issue
#include <iostream>
using namespace std;

const int y = 4; // global constant variable

void funcA(int x) {
    void funcB(int z = sizeof(y)); // OK: sizeof(y) is a constant expression
    funcB(); // call funcB with default argument
}
void funcB(int z) {
    cout << "Value of z: " << z << endl;
}

int main() {
    funcA(10);
    return 0;
}