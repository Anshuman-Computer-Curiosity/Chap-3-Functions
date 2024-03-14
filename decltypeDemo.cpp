#include<typeinfo>
#include<iostream>
using namespace std;
int main(){
   	 const double x = 10.5;
    auto z = x;//const double& z = x;	
    decltype(x) var1 = 8;//type conversion
    decltype(z) var3 = var1;//const double&
    if(typeid(var3).name()==typeid(z).name())
        cout<<"Type is "<<typeid(var3).name()<<endl;
    else
        cout<<"No"<<endl; 
    return 0;    
}
