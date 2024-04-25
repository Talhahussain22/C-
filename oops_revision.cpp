#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
        friend Complex sumComplex(Complex ,Complex);
        void setData(int,int);
        void getData();
};

void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}

void Complex::getData()
{
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
Complex sumComplex(Complex c1,Complex c2)
{
    int real;
    int imag;
    real=c1.a+c2.a;
    imag=c1.b+c2.b;
    cout<<"The sum of complex numbers is "<<real<<" + "<<imag<<"i"<<endl;
}
int main()
{
    Complex c,c1;
    c.setData(2,3);
    c.getData();
    c1.setData(10,20);
    c1.getData();
    sumComplex(c,c1);
}