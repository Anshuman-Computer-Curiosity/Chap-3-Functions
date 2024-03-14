//Reference Var. acting as function paramter
#include <iostream>
using namespace std;

void func(int& x) {
    x = 57;
    
}

int main() {
    int num = 10;
    int& ref = num; // reference variable initialized with variable 'num'
    
    func(ref); // passing variable 'num' as reference to function 'foo'
    cout << "num = " <<ref<<endl; 

    return 0;
}