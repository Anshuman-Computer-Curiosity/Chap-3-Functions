//pass lambda as argument
#include<iostream>
#include <functional>
int main(){
    using namespace std;
    auto add = [](int x) -> function<int(int)> {
 					       return [=](int y) { return x + y; };
    		   };
    auto sum = [](const function<int(int)> &f, int a) { return f(a); };
    auto answer = sum(add(10), 25);//Lambda expression as argument
    cout<<"Sum = "<<answer<<endl;
}
