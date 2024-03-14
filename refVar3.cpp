//program to return object by reference
#include <iostream>
using namespace std;

// Define a simple class
class MyClass {
    private:
        int num;
    public:
        MyClass(int n)  {num =n;} //ctor
        int getValue() const { return num; } //const member function
};

//function that returns an object by reference
MyClass& getObject() {
    static MyClass obj(45);
    return obj;
}

int main() {
    // Call the function to get the object by reference
    MyClass& ref = getObject();
   
    cout << ref.getValue()<<endl;// Output the returned by the object
    return 0;
}






