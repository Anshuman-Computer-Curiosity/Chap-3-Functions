//scope vs lifetime
#include<iostream>
using namespace std;
namespace myNamespace{
  int y = 5;
}
void func() {
  
  int x = 0; // block scope - lifetime limited to block
  cout<< "x = " << x <<" y = " << myNamespace::y<< endl;
  x++; 
  myNamespace::y++;
}
int main() {
  for(int i = 0; i < 3; i++) {
     func();
  }
  cout<< " y = " << myNamespace::y<< endl;
  return 0;
}