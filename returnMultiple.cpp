//Program to return multiple values - array
#include <iostream>
using namespace std;

int* returnArray() {
    static int arr[] = { 10, 20, 30, 40, 50 };
    return &arr[0];
}

int main() {
    int* ptr = returnArray();//address of first element of array
    for (int i = 0; i < 5; i++) {
        cout << *(ptr+i) << " ";
    }
    return 0;
}