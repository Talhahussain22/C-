#include <iostream>
using namespace std;

class Simple
{
    int a,b;
    public:
    Simple(int x,int y=10)
    {
        a=x;
        b=y;
    }
    void print_number()
    {
        cout<<"The value of a and b is "<<a<<" and "<<b;
    }
};

int main()
{
    Simple s(10);
    s.print_number();
    
}