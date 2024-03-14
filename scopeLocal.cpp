//Local scope
#include <iostream>
using namespace std;

void myFunction() {
    int x = 5;
    cout<< "x = " << x <<endl;
    {
      int y=25;
      cout<< "y = " << y <<endl;
    }
    cout<< "y = " << y <<endl;
    x= x + 10;;
} // lifetime : x is destroyed here

int main() {
    // for(int i=0;i<3;i++)
      myFunction(); //function call
    // cout<< "x = " << x <<endl;  
  return 0;
}