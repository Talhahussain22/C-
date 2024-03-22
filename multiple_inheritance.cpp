#include <iostream>
using namespace std;

/*class derived : visibility-mode base1,visibility-mode base2 ------> This is a syntax for multiple inheritance
{
    class body
};*/ 

class Base1{
    protected:
        int base1var;
}; 
class Base2{
    protected:
        int base2var;
  
}; 

class Derived:public Base1,public Base2{
    public:
    void set_value(int a,int b){
            base1var=a;
            base2var=b;
        }
    
        void display(){
            cout<<"The value of base1var is "<<base1var<<endl;
            cout<<"The value of base2var is "<<base2var<<endl;
        }
};

int main(){
    Derived d1;
    d1.set_value(10,20);
    d1.display();

}