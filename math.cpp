#include <iostream>
#include <cmath> // header file for mathemetical functions
using namespace std;

int main() {
    // double sqr = sqrt(2.0);// square root
    // cout << "Square root of 2  = " << sqr << endl;
      
    // double expr = exp(3.0); // exponential
    // cout << "Exponential of 3 = " << expr << endl;
        
    // double logVal = log10(100.0);// logarithm
    // cout << "Logarithm of 2 = " << logVal << endl;
    
    // trigonometric functions
    // double sinVal = sin(2.0);//cos(x) ,tan(x)
    // cout << "Sine of 2 = " << sinVal << endl;
    
    // double powVal = pow(2.0, 3.0); //power
    // cout << "Power of 2 raied to power 3 = " << powVal << endl;
    
    // double abs_val = abs(-4.5); // absolute value
    // cout << "Absolute value of -4.5 = " << abs_val << endl;
    
    // ceil and floor
    double ceilVal = ceil(3.7); // floor(3.7)
    cout << "Ceiling value of 3.7 = " << ceilVal << endl;
          
    double roundVal = round(3.49); // rounding
    cout << "Rounded value of 3.49 = " << roundVal << endl;
    
    double maxVal = fmax(4.5, 5.5);  // fmin(4.5,5.5)
    cout << "Maximum value between 4.5 and 5.5 = " << maxVal << endl;
    
    // inverse trigonometric functions
    double asinVal = asin(0.5); //acos(0.5), atan(2.0)
    cout << "Arcsine of 0.5 = " << asinVal << endl;
    
    // hyperbolic functions
    double sinhVal = sinh(0.5);
    cout << "Hyperbolic sine of 0.5 = " << sinhVal << endl;

    return 0;
}