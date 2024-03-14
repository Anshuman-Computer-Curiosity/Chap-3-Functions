//lambda expression as return statement
#include<iostream>
#include<functional>
using namespace std;
function<int(int)> getMultiplier(int factor) {
    return [factor](int value) {
        return value * factor;
    };
}
int main() {
    auto multiplier = getMultiplier(5); //factor= 5
    int result = multiplier(10); //value = 10
    cout << "Result: " << result <<endl;
    return 0;
}