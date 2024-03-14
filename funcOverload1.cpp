//With function overloading 
#include<iostream>
using namespace std;
   void sum(int,int);//F1
   void sum(double,double);//F2
   void sum(char,char);//F3
int main() {
    sum(10,20); //F1
    sum(7.52,8.14);
    sum('A','B'); 
    return 0;
 } 

 void sum(int x,int y){
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
 }
 void sum(double x,double y){
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
 }
 void sum(char x,char y){
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
 }
