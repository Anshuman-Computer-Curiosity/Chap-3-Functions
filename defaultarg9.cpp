//Cmbinig defualt argument provided in mem. func. decl. and def.
#include <iostream>
using namespace std;

class MyClass {
private:
    int a, b;
public:
    void memFunc1(double r = 5.5);
    void setData(int x, int y = 8);
    void getData();
};

void MyClass::memFunc1(double r) { // only declare default value in header file
    cout << "r = " << r << endl;
}

void MyClass::setData(int x =2, int y) {
    a = x;
    b = y;
}

void MyClass::getData() {
    cout << "a + b = " << a + b << endl;
}

int main() {
    MyClass m;
    m.memFunc1(); // using default value for memFunc1
    m.setData(); // using default values for setData
    m.getData();
    return 0;
}