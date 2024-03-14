// program to pass reference to a pointer
#include <iostream>
using namespace std;
void allocateMemory(int *&ptr, int size) {
    ptr = new int[size];
}

int main() {
    int *ptr = NULL;
    int size = 5;
    allocateMemory(ptr, size);   
    for (int i = 0; i < size; i++) // initialize the array
        ptr[i] = (i+1)*10;
    for (int i = 0; i < size; i++) // print the array
        cout << ptr[i] << " ";
    cout << endl;
    delete[] ptr;// free the memory
    return 0;
}