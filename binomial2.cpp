//Program to compute binomial coefficient using functions
#include<iostream>
using namespace std;
long int fact(int n);//function declaration
int main(){
  int i,n=5,r=2,b_coeff;
  b_coeff=fact(n)/(fact(r)*fact(n-r));//multiple function calls
  cout<<"Bino. coeff. = "<<b_coeff<<endl; 
  return 0; //optional
}

long int fact(int n){  //function header
    long int factN = 1; //functoin body
   for(int i=0;i<n;i++)
        factN=factN*n;
    return factN; // causes value in factN to return and exit function
} //does not ends with semicolon

