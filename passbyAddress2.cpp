#include<iostream>
void modify(int*, int *, int **); // function prototype 
using namespace std;
int global = 5; // global variable
int main()
{
   int a=15,b=27,c=40;
   int *ptr1 = &b; // pointer holding address of b
   int *ptr2 = &c; // pointer holding address of c
   cout<<"Before calling (in main)";
   cout<<"a = "<<a<<",*ptr1 = "<<*ptr1<<",*ptr2 = "<<*ptr2<<endl;
   modify(&a, ptr1, &ptr2);
   cout<<"After calling (in main)";
   cout<<"a = "<<a<<",*ptr1 = "<<*ptr1<<",*ptr2 = "<<*ptr2<<endl;
   return 0;	
}
void modify(int *x, int *y, int** z)
{
   *x = 50;
    y = &global; 
   *z = &global;
}
