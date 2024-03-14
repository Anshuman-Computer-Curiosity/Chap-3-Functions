#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *p = &x;   // Pointer variable pointing to x
  int *&ref = p; // Reference to pointer variable p
  cout << "x = " << x << endl;
  cout << "*p = " << *p << endl;
  cout << "*ref = " << *ref << endl;

  // Modify value of x using pointer variable p
//   *p = 20;
//   cout << "x = " << x << endl;
//   cout << "*p = " << *p << endl;
//   cout << "*ref = " << *ref << endl;

  // Modify value of x using reference to pointer variable ref
  ref = new int;
  *ref = 30;
  cout << "x = " << x << endl;
  cout << "*p = " << *p << endl;
  cout << "*ref = " << *ref << endl;

  // Pointer to reference is not possible
//   int &*ptr = &ref;  // This line will cause a compiler error
  return 0;
}