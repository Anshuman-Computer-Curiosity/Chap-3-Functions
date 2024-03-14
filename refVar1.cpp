#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int& refVar = a, &refVar2 = b; // intialized at the time of its declaration
    
    cout<<"a = "<<refVar<<endl;
    cout<<"refVar = "<<refVar<<" refVar2 = "<<refVar2<<endl;

    refVar = 55; //change in ref. variable affects a
    cout<<"a = "<<a<<endl;

    return 0;
}