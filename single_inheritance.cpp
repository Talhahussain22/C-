#include <iostream>
using namespace std;

class Base
{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        
};
void Base :: setData(){

    data1=100;
    data2=200;   
}

int Base ::getData1(){
    return data1;
}



class Derived:public Base{
    int data3;
    public:
        void process();
        void display();

};

void Derived :: process(){
    data3=data2*getData1();
}
void Derived :: display(){
    cout<<"The value of data3 is "<<data3;
    }

int main()
{
    
    
    Derived d1;
    d1.setData();
    d1.process();
    d1.display();
}    



