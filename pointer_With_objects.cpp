#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void setData(int a,int b){real=a; imaginary=b;}
        void getData(){
            cout<<"The value of real part is "<<real<<endl;
            cout<<"The value of imaginary part is "<<imaginary<<endl;

        }
};

int main(){

    Complex *ptr=new Complex;

    // Complex c1;
    // Complex *ptr=&c1;

    // c1.setData(1,10);
    // c1.getData();
    // (*ptr).setData(1,10); as same as
    // (*ptr).getData(); as same as
    ptr->setData(1,10);
    ptr->getData();
}