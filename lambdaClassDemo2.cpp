//using lambda as argument
#include<iostream>
#include<functional>
using namespace std;
class Calculator {
public:
    static int multiply(int a, int b) {
        return a * b;
    }
    void performOperation(int a, int b, function<int(int, int)> operation) {
        int result = operation(a, b);
        cout<<"Result: " << result <<endl;
    }
};
int main() {
    Calculator calc; //object
    // Using a lambda function with the Calculator class
    calc.performOperation(5, 3, [](int a, int b) {
        return Calculator::multiply(a, b);
    });
   return 0;
}
