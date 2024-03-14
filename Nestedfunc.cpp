#include <iostream>
using namespace std;

void Outer(int x){
    int z = 15; //variable
    cout<<"Outer function, x = "<<x<<endl;
    auto nested = [=](int y){
        cout<<"Nested function, y = "<<y<<endl;
        return x+y+z;
    }; //end of lambda expression
    int res = nested(30);
    cout<<"Result = "<<res<<endl;
}

int main() {
    Outer(20);
    return 0;
}