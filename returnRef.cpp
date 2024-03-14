//Program to return a reference variable
#include<iostream>
using namespace std;
int modify(int& );
int main(){
    int x = 10,y=30;
    //modify(x)=35; // function call as l-value
    const int &z = modify(x);
    cout<<z;
    // y = modify(y);
    return 0;
}
int modify(int& a){
   static int b =28;
   cout<<"a = "<<a<<" b= "<<b<<endl;
   a = a+5;
   return b;

}