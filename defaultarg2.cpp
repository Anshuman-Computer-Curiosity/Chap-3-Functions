// Default value as expression
#include<iostream>
using namespace std;
int x; //global variable
int func(int a, int b = x + 1){
    return a + b;
}

int main(){
    x = 5;
    cout << func(x) <<endl; // Output: 12
    x = 10;
    cout << func(15) <<endl; // Output: 22
    return 0;
}