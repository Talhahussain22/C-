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