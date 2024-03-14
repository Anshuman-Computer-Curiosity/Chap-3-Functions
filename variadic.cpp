#include<iostream>
#include<cstdarg>
double average(int, ...);// function declaration with default value
using namespace std;

int main(){
   cout<<"Average of 22.2,5.3,16.8,15.5 = "<<average(4,22.2,5.3,16.8,15.5)<<endl;
   cout<<"Average of 5, 10, 15 = "<<average(3,5,10,15)<<endl;
   return 0;
}

double average(int countArg, ...)
{
   // 1. declared vararglist of type va_list                    
   va_list vararglist; 

   double sum = 0;
   int i;
   
   //2. va_start called to initialize vararglist to store all values after countArg
   va_start(vararglist, countArg); 
   for(i=0; i<countArg; i++) 
        sum += va_arg(vararglist, double); //sum += va_arg(vararglist,int);  
		//3. va_arg macro access elements one by one 
   
   va_end(vararglist); //4. clean memory allocated to vararglist 
   
   return (sum/countArg);
}
