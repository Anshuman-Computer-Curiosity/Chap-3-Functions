#include<iostream>
using namespace std;
class MyClass{
    private:
        int data; // data member
    public:
        MyClass(int b){//ctor 
            data = b;
            cout<<"Constructor called"<<endl;
        }    
        ~MyClass(){//dtor
            cout<<"Destructor called"<<endl;
        }
        int getData(){  return data;  }
};
int main(){
    MyClass mObj(25);
    cout<<"data = "<<mObj.getData()<<endl;
    return 0;
}