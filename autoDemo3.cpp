#include<iostream>
using namespace std;
int main(){
auto *ptr = new int(5); // 'ptr' is deduced as int*
cout << *ptr << endl;
delete ptr;

auto val = 1;
auto *p = &val;
auto **dblp = &p;
cout << *p << endl;
cout<< **dblp <<endl;

float a = 32.5f;
auto *b = new auto(a);
cout << *b << endl;
return 0;
}