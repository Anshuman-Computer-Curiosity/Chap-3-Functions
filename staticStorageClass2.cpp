//Using static with class members
#include <iostream>
using namespace std;
class MyClass {
    public:
        static int count;  // static data member
        MyClass() {
            count++;  // increment count on object creation
        }
        static void displayCount() {  // static member function
            cout<< "Number of objects created: " << count <<endl;
        }
};

int MyClass::count;  // initialize static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::displayCount();  // call static member function

    return 0;
}