//Program to show how pass by reference works
#include<iostream>
void swap(int &,int &);//function declaration
using namespace std;
int main(){
   int a = 10, b =20;
   cout<<"Before calling, ";
   cout<<"a = "<<&a<<" b = "<<&b<<endl;
   swap (a,b); //Pass by reference, alias of argumetn is passed
   cout<<"After calling, ";
   cout<<"a = "<<a<<" b = "<<b<<endl;
   return 0;	
}
void swap(int& x,int& y){ //function definiton, x and y parameter
   int temp;
   temp = x ;
   x = y;
   y = temp;
   cout<<"In function, ";
   cout<<"x = "<<&x<<" y = "<<&y<<endl;
}

