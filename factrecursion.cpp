//Recursive - factRec calculation
#include<iostream>
long int factRec(int); // function prototype 
using namespace std;
int main(){
   int x = 5 ;
   long int k = factRec(x); 	// function call 
   cout<<"Factorial of 5 = "<<k<<endl;
   return 0;
}
long int factRec(int num){ // function definition
   if (num<0) return 0; // terminating condition
   if(num==0) return 1; //base condition
   return num*factRec(num-1); //recurive call
}

