//global scope
#include <iostream>
using namespace std;

int x = 5; // global variable
void myFunction() {
  
  cout<< "in Function, x = " << x <<endl;
} //lifetime :  x is not destroyed here

int main() {
  myFunction();
  x = 10;
  cout<< "in main, x = " << x <<endl; //Unlike local
  return 0;
}