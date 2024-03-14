//local variables cannot be used as default value expression
#include <iostream>
using namespace std;

void funcA(int x) {
    int y = 4; //local variable
    void funcB(int z = sizeof(y)); //Error
}

void funcB(int z) {
    cout << "Value of z: " << z << endl;
}

int main() {
    funcA(10);
    return 0;
}