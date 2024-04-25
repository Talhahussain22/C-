/*RUN TIME POLYMORPHISM:*/
/*In a pointer_to_derived class  we have seen if we make a pointer of type of 
base class and point it to the object of derived class then in that case we can
only access the method of base class but if we want to access the method of derived
class we can do this by making the function of base class virtual which have same name in derived class as mentioned below 
And this concept give us idea of run time polymorphism*/
#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=8;
        virtual void display()
            {
                cout<<"The value of base class variable is "<<var_base<<endl;
            }
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
    BaseClass  base_obj;
    DerivedClass derived_class;
    pointer_base= &derived_class;

    pointer_base->display();
}