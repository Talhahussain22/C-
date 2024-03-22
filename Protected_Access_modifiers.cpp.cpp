/*Protected modifier allow us to access the member only in inherited class not in main or other classes it is somehow similar
to private one but only have functionality that we can access the protected member in inherited class:*/


#include <iostream>
using namespace std;

class Base{
    protected:
        int a=10;
    private:
        int b=20; 
         
    public:
        int c=30;  

};

class Derived:public Base {
    // As we can see protected member a is accessible only in inherited class
    public:
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    Derived d1;
    d1.getData();
    Base b1;
    cout<<"The value of c is "<<b1.c;
    // cout<<b1.a; This will give error because a is protected member can't inside outside the class(only accessible in inherited class)
    return 0;
}