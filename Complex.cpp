
#include "Complex.h" //Include your header file here
using namespace std;
Complex& Complex::add(Complex cc1,Complex cc2){

    real = cc1.real + cc2.real;
    imag = cc1.imag + cc2.imag;
    return *this;
}
Complex& Complex::multiply(Complex cc1,Complex cc2){

    real = (cc1.real * cc2.real) - (cc1.imag * cc2.imag) ;
    imag = (cc1.real * cc2.real) + (cc1.imag * cc2.imag) ;
    return *this;
}