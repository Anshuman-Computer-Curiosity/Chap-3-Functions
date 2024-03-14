#include <iostream>
using namespace std;
class MyClass {  
    private : 
        int num;

    public:
        MyClass(int n) : num(n) {
            cout<<"MyClass constructor, x = "<<n<<endl;
        }
        int getNum() const { 
            return num;
        }
};

int main() {
    const MyClass& myObj = MyClass(55);//r-value temporary object
    cout<<"myObj.getNum() = " <<myObj.getNum()<<endl;
    return 0;
}




