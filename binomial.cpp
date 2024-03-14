#include<iostream>
using namespace std;
long int fact(int);//function declaration
int main()
{
  int i,n=5,r=2,b_coeff;
  
  b_coeff=fact(n)/(fact(r)*fact(n-r));
  cout<<"Bino. coeff. = "<<b_coeff<<endl; 
  return 0;
}
long int fact(int n){//function header
   long int factN = 1;
   for(int i=0;i<n;i++)
        factN=factN*n;
  return factN;
}
