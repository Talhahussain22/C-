/*Abstract base class is a class which just make to use later by inhertiance means
its only role is in inheritance and we are not able to make object of this class:
for that we have to make pure virtual funtion*/


#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=8;
        virtual void display()=0; /*-> do nothing function ->pure virtual function*/
            
};
class DerivedClass: public BaseClass{
    public:
        int var_derived=9;
        void display()
        {
            cout<<"The value of derived class variable is "<<var_derived<<endl;
        }
};

int main()
{   BaseClass *   pointer_base;
    DerivedClass derived_class;
    pointer_base= &derived_class;

    pointer_base->display();
}