//Program to sort elements of array using sort
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int arr[] = { 50, 20, 80, 10, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, compare);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}