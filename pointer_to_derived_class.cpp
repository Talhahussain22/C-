/*If you have pointer of base class and you point that pointer to derived class
then when you class function using that pointer this will call the function of 
a base class means derived class function is not accessible by using the 
pointer that we made by BaseClass and store the address of derived class in it*/

#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=8;
        void display()
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
    DerivedClass *   pointer_derive;
    BaseClass  base_obj;
    DerivedClass derived_class;
    pointer_base= &derived_class;
    pointer_derive= &derived_class;

    pointer_derive->display();
    pointer_base->display();
}