//return multiple values (area,perimeter) from function
#include<iostream>
void calAreaPer(int, int, int&,int&); //func. dec.
using namespace std;
int main()
{
   int length=10, breadth=30, area, perimeter;
   calAreaPer(length,breadth,area, perimeter); //functin call
   cout<<"Area of Rectangle = "<<area<<endl;
   cout<<"Perimeter of Rectangle = "<<perimeter<<endl;
   return 0;
}
void calAreaPer(int l, int b, int& ar ,int& per)//func. def.
{
   ar = l*b;
   per = 2*(l+b);
}
