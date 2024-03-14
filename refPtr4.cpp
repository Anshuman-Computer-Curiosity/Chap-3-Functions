#include <iostream>
using namespace std;

int main() {
    int a = 10;
    void* ptr1 = &a;   // pointer to void
    int** ptr2 = (int**)(&ptr1);  // pointer to pointer to int

    // printing the values using pointers
    cout << "Value of a: " << a<< endl;
    // cout << "Value of a using ptr1: " << *ptr1 << endl;
    cout << "Value of a using ptr2: " << **ptr2 << endl;

    return 0;
}