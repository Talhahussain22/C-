#include <iostream>
using namespace std;

class Complex
{
    private:
    int a;
    int b;
    public:
        void SetData(int v1 , int v2)
        {
            a=v1;
            b=v2;
        }

        void sum(Complex o1, Complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }

        void printsum()
        {
            cout<<"The sum is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    Complex c1,c2,result;
    c1.SetData(1,2);
    c1.printsum();
    c2.SetData(3,4);
    c2.printsum();
    result.sum(c1,c2);
    result.printsum();
    
  
}