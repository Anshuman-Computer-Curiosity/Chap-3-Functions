#include<iostream>
using namespace std;
auto add(int a, int b) { //function definition
    return a + b;
}
auto multiply = [](double a, double b) { //lambda expression
    return a * b;
};

int main(){
    auto product = multiply(2.8, 4.0); // 'product' is deduced as double.
    cout<<"Sum = "<<add(10,20)<<endl;
    cout<<"product = "<<product<<endl;
    return 0;
}