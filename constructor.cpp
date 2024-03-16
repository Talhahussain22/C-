#include <iostream>
using namespace std;

class Complex
{   int a,b;
    
    public:
    Complex(int v1 , int v2)
    {
        a=v1;
        b=v2;
    }
    void Display()
    {
        cout<<"The Complex number is "<<a<<" + "<<b<<"i";
    }

};
int main()
{
    Complex c1(1,3);
    c1.Display();
  
}