// return reference type
//never returns reference type if not explicitly specified

#include<iostream>
using namespace std;
class MyClass {
    private:
        int val;
public:
    MyClass(int x) : val(x) {} //ctor
    void setData(int a) {
        val = a;
    }
    int getData() const {
        return val;
    }
};

int main() {
    MyClass mObj(10);
    cout << "Old value: " << mObj.getData()<<endl;
    auto refer = [&mObj]() -> MyClass& {
        return mObj;
    };
    refer().setData(25);
    cout << "New value: " << mObj.getData()<<endl;
    return 0;
}