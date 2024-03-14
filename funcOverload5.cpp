//child class type argument given precedence over base class type argument
#include<iostream>
using namespace std;

class Base {
public:
    void display(int x) { cout << "Base::display(" << x << ")" << endl; }
};

class Derived : public Base {
public:
    void display(int x) { cout << "Derived::display(" << x << ")" << endl; }
    void display(double x) { cout << "Derived::display(" << x << ")" << endl; }
};

int main() {
    Derived d;
    d.display(10);      // calls Derived::display(int)
    d.display(23.5);    // calls Derived::display(double)
    
    d.Base::display(34); // calls Base::display(int) through derived class object
    return 0;
}