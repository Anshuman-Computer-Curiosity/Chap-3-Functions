// default argument as expression
#include<iostream>
using namespace std;
int x=5;
int myfunc(int var){ 
    return var; 
}
int func(int a, int b = myfunc(x)); // default argument as function call 
int main(){	
		    x = 10; // changes x to 10
		    cout<<func(15);// func(15,myfunc(10))
		    return 0;
}
int func(int a, int b){ 
    return a+b;
}
