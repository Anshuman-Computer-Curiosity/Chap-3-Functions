// class scope
#include <iostream>
using namespace std;
class MyClass {
    public:
        int x; // non-static class variable
        static int y; // static class variable
};

int MyClass::y = 0; // initialization of static variable
int func();//function declaration
int main() {
  MyClass obj; // Lifetime : only within class
  obj.x = 5; //lifetime : associated with object
  MyClass::y = 10; //lifetime : associated with class
  cout<< "obj.x = " << obj.x <<endl;
  cout<< "in main, MyClass::y = " << MyClass::y <<endl;
  func();
  return 0;
}//object cease to exist
int func(){
    cout<< "obj.x = " << obj.x <<endl;//Object destroyed
    cout<< "In func, MyClass::y = " << MyClass::y <<endl;
}