// class dynamic object lifetime
#include <iostream>
using namespace std;
class MyClass {
    public:
        int x; // non-static class variable
        MyClass() {  
          cout << "Object created." <<endl; 
          }
        ~MyClass() { 
          cout << "Object destroyed." <<endl; 
          }
};
int main() {
  MyClass* obj = new MyClass(); // Lifetime : only till delete
  (*obj).x = 5; 
  cout<< "obj.x = " << obj->x <<endl;
  delete obj; //destroyed dynamic object
  obj = nullptr;// Prevents accidental access to the deallocated memory
  cout<< "obj.x = " << obj->x <<endl;
  delete obj;
  return 0;
}