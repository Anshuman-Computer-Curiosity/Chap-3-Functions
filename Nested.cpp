#include <iostream>
using namespace std;

void outer(int x){
    cout<<"Outer function called with argument " << x <<endl;
    //  Nested lambda function, C++11
    auto nested = [](int y) {
        cout << "Nested function called with argument " << y <<endl;
    };
    nested(42); // Call the nested function
}

int main() {
    void (*fp_ptr)(int) = outer;
    //"ISO C++ forbids applying 'sizeof' to an expression of function type [-fpermissive]"
    cout << sizeof(fp_ptr) << endl;
    // outer(55);
    //  cout << sizeof(outer) << endl;
    return 0;
}