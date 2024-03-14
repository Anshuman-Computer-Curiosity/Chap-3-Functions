//Nested lambda - returns another lambda expression
#include <iostream>
using namespace std;
int main() {
    auto addX = [](int x) {
                return [x](int y) {
                            return x + y;
                };
    };
    auto addY = addX(10);
    cout << "Sum = " << addY(25) << endl; // Output: Sum = 35
    return 0;
}