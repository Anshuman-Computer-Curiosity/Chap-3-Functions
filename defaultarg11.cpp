//constructor with default argument
#include<iostream>
using namespace std;

class MyClass {
  private:
    int a,b;

  public:
    MyClass(int x=0, int y=0) {
        a = x;
        b = y;
    }

    void getData() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main() {
    MyClass m1;        
    m1.getData();

    MyClass m2(10,20); 
    m2.getData();

    MyClass m3(30);    
    m3.getData();

    return 0;
}