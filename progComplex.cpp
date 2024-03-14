#include<iostream>
#include "Complex.h" //Include your header file here
using namespace std;
int main(){
    Complex c1(7,5);
    Complex c2(5,4);
    Complex c3;
    c3.add(c1,c2);
    cout<<"("<<c1.getReal()<<" + "<<c1.getImg()<<"i)"<<" + ";
    cout<<"("<<c2.getReal()<<" + "<<c2.getImg()<<"i)"<<" = ";
    cout<<"("<<c3.getReal()<<" + "<<c3.getImg()<<"i)"<<endl;
}
