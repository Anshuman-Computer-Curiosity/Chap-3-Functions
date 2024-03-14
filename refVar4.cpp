//No need of intializing reference variable when
//declaring class member within class declaration
#include <iostream>
using namespace std;

class MyClass {
    public:
        int& myRef; // No initialization
        MyClass(int& ref): myRef(ref) {}
        // MyClass(int& ref)  { // Shows error
        //     myRef = ref;
        // }
};

int main() {
    int x = 5;
    MyClass obj(x);
    cout << "Value of x = " << x << endl;
    obj.myRef = 10;
    cout << "Value of x now = " << x << endl;
    return 0;
}