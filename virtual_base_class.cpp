/*This concept of virtual base class is very import to avoid ambiguity is inheritance :
    let say you have a base class A from A two classes derived let say B and C now the protected member of A has became the
    protected member of B and C if we inherit a Class D form B and C both class will try to inherit the same protected member
    that they got from A to D this will create ambiguity and give error to resolve this we make A as virtual base class means
    we simply give authory to A that it should tell classes inherited from it that if in future any class try to made by
using both of you as inheritance only one of you should give the member that i gave to you!*/

#include <iostream>
using namespace std;

class V_Base{
    protected:
        int a=10;

};
class Base1:virtual public V_Base{
   

};
class Base2:virtual public V_Base{
    

    

};

class Derived:public Base1,public Base2{
    public:
         void getData(){
            cout<<"The value of a is "<<a<<endl;
         }
};

int main(){
   
    Derived d;
   
    d.getData();
    
}