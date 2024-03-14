#include<iostream>
using namespace std;
int main(){
  auto add = [](double a,double b) -> int {
      return a+b;
   };
   cout<<"Sum = "<<add(15.5,25.7);
   return 0;
}
