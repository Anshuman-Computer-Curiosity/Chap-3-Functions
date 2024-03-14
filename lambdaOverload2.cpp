#include <iostream>
#include <functional>
using namespace std;
void processNumber(function<void(int)> func, int x) {
    func(x);
}
int main() {
    auto printNumber = [](int x) {
        cout << "Integer: " << x <<endl;
    };
    auto multiplyByTwo = [](int x) {
        cout << "Result: " << x * 2 <<endl;
    };
    processNumber(printNumber, 5);       
    processNumber(multiplyByTwo, 10);     
    return 0;
}






