#include <iostream>
using namespace std;
static int globalStatic =20; //global static variable
void func() {
    static int localFunc; // static variable with scope limited to func()
    localFunc++;
    {
        static int b;
        cout<< "b = " << b <<endl; //Block scope
    }
    // cout<< "b = " << b <<endl; //Block scope
    cout<<"Func. Called "<<localFunc<<" th time" <<endl;
}
int main() {
    // cout<< "localFunc = " << localFunc <<endl; //Block scope
    // cout<< "Global static var. = " << globalStatic <<endl; //File scope
    // for(int i=0;i<3;i++)
        func(); 
    return 0;
}