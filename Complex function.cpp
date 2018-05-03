#include<iostream>
#include<iomanip>
#include"Complex.h"
using std::ostream;
using std::istream;
Complex::Complex()
    {
        x=y=0;
    }
    Complex::Complex(double m,double n)
    {
        x=m;
        y=n;
    }
    Complex Complex::operator+(const Complex& t)const
    {
        return Complex(x+t.x,y+t.y);
    }
    Complex Complex::operator-(const Complex& t)const
    {
        return Complex(x-t.x,y-t.y);
    }
    Complex Complex::operator*(const Complex& t)const
    {
        return Complex(x*t.x-y*t.y,x*t.y+y*t.x);
    }
    Complex Complex::operator/(const Complex& t)const
    {
        return Complex((x*t.x+y*t.y)/(t.x*t.x+t.y*t.y),(y*t.x-x*t.y)/(t.x*t.x+t.y*t.y));
    }
    Complex Complex::operator+=(const Complex& t)
    {
        *this=*this+t;
        return *this;
    }
    Complex Complex::operator-=(const Complex& t)
    {
        *this=*this-t;
        return *this;
    }
    Complex Complex::operator*=(const Complex& t)
    {
        *this=*this*t;
        return *this;
    }
    Complex Complex::operator/=(const Complex& t)
    {
        *this=*this/t;
        return *this;
    }
    ostream& operator<<(ostream& os,const Complex& t)
    {
        using namespace std;
        os<<fixed<<setprecision(2)<<'('<<t.x<<','<<t.y<<')';
        os.unsetf(std::ios_base::floatfield);
        return os;
    }
    istream& operator>>(istream& is,Complex& t)
    {
        is>>t.x>>t.y;
        return is;
    }
