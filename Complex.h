#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
class Complex
    {
private:
    double x,y;
public:
    Complex();
    Complex(double,double);
    Complex operator+(const Complex&)const;
    Complex operator-(const Complex&)const;
    Complex operator*(const Complex&)const;
    Complex operator/(const Complex&)const;
    Complex operator+=(const Complex&);
    Complex operator-=(const Complex&);
    Complex operator*=(const Complex&);
    Complex operator/=(const Complex&);
    friend std::ostream& operator<<(std::ostream&,const Complex&);
    friend std::istream& operator>>(std::istream&,Complex&);
    };
#endif // COMPLEX_H_INCLUDED
