#include<iostream>
using namespace std;
int sum(int ,int ); //function decalartion
int multiply(int ,int ); //function decalartion
int main(){
    int c = sum(3,5); //function call
    int d = sum(4,7); //function call
    int res = multiply(c,d); //function call
    cout<<res<<endl;
    return 0;
}
int sum(int a,int b){ //function definition
    return a+b;
}
int multiply(int a,int b){ //function definition
    return a*b;
}