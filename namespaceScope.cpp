// namespace scope
#include <iostream>
using namespace std;
void func(int x);
namespace MyNamespace {
  int x = 5;
} // lifetime : x accessible in namespace only

int main() {
  cout<< "MyNamespace::x = " << MyNamespace::x <<endl;
  MyNamespace::x = 10;
  cout<< "MyNamespace::x = " << MyNamespace::x <<endl;
  func(MyNamespace::x);
    // cout<< "x = " << x <<endl; //Unlike global
  return 0;
}
void func(int x){
 x = 25;
  cout<< "in func, MyNamespace::x = " << MyNamespace::x <<endl;
}