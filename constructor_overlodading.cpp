#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex()
    {
        a=0;
        b=0;
    }
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    Complex(int x)
    {
        a=x;
        b=0;
    }

    void print_number()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

    
};

int main()
{
    Complex c1(2,3);
    c1.print_number();

    Complex c2(2);
    c2.print_number();

    Complex c3;
    c3.print_number();
    
}