//constexpr used to intialize array
#include<iostream>
using namespace std;
constexpr int hcf(int x, int y){
  return (y== 0) ? x : hcf(y, x % y);
}
int sum (const int a,const int b){return a+b;}
int main() {
    constexpr int res = hcf(5,abs(-25));
   int a[res];
   for(int i=0;i<res;i++)
        cout<<"a["<<i<<"] = "<<i+1<<endl;
}
