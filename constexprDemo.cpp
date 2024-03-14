#include <iostream>
using namespace std;
constexpr int globalVar = 50;

constexpr int add(int x, int y) { //non-member function
    return x + y + globalVar; 
}

class MyClass {
public:
    int value;
    constexpr MyClass(int x) : value(x) { } //ctor
    constexpr static  int multiply(int a, int b) { //static member function
        return a * b;
    }
}; //class definition ends

int main() {
    constexpr int result = add(5, 10); // returns a constant
    cout<< "Result: " << result <<endl;
    
    constexpr MyClass obj(5+10);
    cout<< "Value: " << obj.value <<endl;

    constexpr int x = 5;
    cout << MyClass::multiply(x, 10);
    return 0;
}