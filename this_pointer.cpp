/*In C++, the this keyword is a pointer that points to the object for which a member function is called. It is used to access members of the current object, especially in the context of class methods. The this pointer is a hidden parameter to all non-static member functions and is available within the body of those functions. It is used to differentiate between the local object's members and parameters with the same name.*/

#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a=a;}

        void getData()
        {
            cout<<"The value of a is "<<a;
        }
};

int main()
{
    A obj;
    obj.setData(5);
    obj.getData();
}