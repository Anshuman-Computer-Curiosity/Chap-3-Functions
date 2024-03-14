// Using default argument in lambda expression
#include <iostream>
using namespace std;
int main()
{
    auto myLambda = [](int x, int y = 1) {
        cout << "x + y = " << x + y <<endl;
    };

    myLambda(5); // Output: x + y = 6
    myLambda(10, 2); // Output: x + y = 12
    
    return 0;
}