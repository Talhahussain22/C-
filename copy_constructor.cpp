#include <iostream>
using namespace std;
 
class Number{
    int a;
    public:
    // This constructor will run when we give no argument to object
        Number(){   
            a=0;
        }
    // This constructor will run when we give one interger argument to object
        Number(int num)
        {
            a=num;
        }

        // When copy constructor is not availible the compiler will make  default copy constructor
        Number(Number &obj)
        {
            cout<<"Copy constructor called"<<endl;
            a=obj.a;
        }

        void display()
        {
            cout<<"The value of object is "<<a<<endl;
        }

};
int main()
{
    Number x,y(45),z(90),z2=y;
    x.display();
    y.display();
    z.display();
    Number z1(y);
    z1.display();
    z2.display();

    Number z3=x;
    z3.display();
}