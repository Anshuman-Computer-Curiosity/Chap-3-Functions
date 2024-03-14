//Func. number of parameter
#include<iostream>
using namespace std;
int area(int); //F1,Area of Square
int area(int,int);//F2,Area of Rectangle
int area(int,int,int);//F3,Area of Cubiod
int main(){
  int side = 10,sqrArea;
  int le = 5,br = 6,rectArea;
  int l = 4,w = 5,h = 6,cuboidArea;

    sqrArea = area(side); //calls in area(int x)
    cout<<"Area of square ("<<side<<") = "<<area(side)<<endl;    

  rectArea = area(le,br); //calls in area(int x,int y)
    cout<<"Area of Rectangle ("<<le <<","<<br<<") = "<<rectArea<<endl;
  cuboidArea = area(l,w,h); //calls int area(int x,int y, int z);
    cout<<"Surface area of cuboid ("<<l <<","<<w<<","<<h<<") = "<<cuboidArea<<endl;
  return 0;
}
int area(int x){ //Area of square
     return(x*x);
}
int area(int l,int b){ //Area of rectangle
	return(l*b);
}
int area(int x,int y,int z){ //Surface area of cuboid
	return (2*x*y + 2*x*z + 2*z*y);
}
