#include<iostream>
using namespace std;
int greatest(int,int ); //fubnction declaration
int main(){
    int res = greatest(3,greatest(8,4));
    cout<<res<<endl;
    return 0;
}
int greatest(int x,int y){ //function defintion
  int z = (x>y)?x:y;
  return z;
}