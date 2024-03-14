//Program to calculate sin(45) using built-in function sin() in math library in C
#include<iostream>		// for cout stream
#include<iomanip> 		// for setprecision() manipulator 
#include<cmath>   		// math standard library in C included

#define PI 4.0*atan(1.0) 	// macro definition

using std::cout;	// importing entire std namespace in current prog. scope
int main() {
 	double degrees = 45, res, r;
 	
	r = PI/180;

	res = tan(degrees*r); //Radians = Degree x PI/180 
	cout<<"tan("<< degrees << ") = "<<std::setprecision(2)<<res;
  	return 0; //can avoid also
}
