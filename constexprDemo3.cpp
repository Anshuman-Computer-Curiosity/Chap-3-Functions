//multiple return statements allowed in C++14 onwards
#include<iostream>
using namespace std; 
constexpr int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    constexpr int x = 10;
    constexpr int y = 20;
    constexpr int result = max(x, y);
    cout << "Max() returns = " << result;
    return 0;
}