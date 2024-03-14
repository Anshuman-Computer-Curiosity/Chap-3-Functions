#include <iostream>
using namespace std;
class MyClass {
    private:
        int data;
        void memberFunction() { cout << "Member function called" <<endl; }
    public:
        MyClass(){ data = 25; }  //ctor
        void modify() {
            int increment = 5;
            auto lambda = [this, increment]() {
                data += increment;
                memberFunction();
            };
            lambda();
        }
        void display() const {
            cout<<"Data: " << data <<endl;
        }
};

int main() {
    MyClass obj;
    obj.display();
    obj.modify();
    obj.display();
    return 0;
}