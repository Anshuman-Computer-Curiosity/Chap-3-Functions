//multiple return statements
#include <iostream>
using namespace std;
int main() {
    auto result = [](int x, int y, const char* op) -> double {
        if (op == "avg") {
            return (x + y) / 2.0;  // Returns a double
        } else {
            return x + y;  // Returns an int
        }
    };

    double avg = result(5, 10, "avg");
    int sum = result(5.5, 10, "sum");
    cout<<"Average: "<< avg <<endl;
    cout<<"Sum: " <<sum <<endl;
    return 0;
}