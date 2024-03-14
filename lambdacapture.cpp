#include<iostream>
using namespace std;
int main(){
   	 int x=5,y=12;
   	 auto val = [=]() { return x*y; }; // 'x' captured by value
	 cout<<"val = "<<val()<<" x = "<<x<<endl; //lambda function call
	 
     auto ref = [&]() { return ++x + ++y; }; // 'x' captured by reference
	 cout<<"ref = "<<ref()<<" x = "<<x<<endl; // lambda function call
	 auto mix = [&,y]()mutable{ 
					     x = 20; y = 25;
                         ++y;
					     return x+y;
     }; // 'x' captured by reference, 'y' by value
     cout<<"mix = "<<mix()<<" x = "<<x<<" y = "<<y<<endl; 
	}
