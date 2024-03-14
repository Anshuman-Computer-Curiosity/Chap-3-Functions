// save as complex.h *
#ifndef __COMPLEX_H
#define __COMPLEX_H
class Complex{
  private:
     double real;
     double imag;  
 public:
   Complex(double r,double i){ //2paramter ctor
        real=r; 
        imag = i;
    }
   Complex (){real = 0.0; imag = 0.0;} //0paramater ctor
   Complex& add(Complex, Complex); //member function declaration
   Complex& multiply(Complex, Complex);
   double getReal(){return real;}
   double getImg(){return imag;}
};
#endif