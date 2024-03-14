
#include<iostream>
using namespace std;

void f3(char) { cout << "f3(char)" <<endl; }
void f3(int) { cout << "f3(int)" <<endl; } 

int main(){
    // f3(true); 
    // f3((bool)1); 
    f3((bool)('A')); 
     
    return 0;
}