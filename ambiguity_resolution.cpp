/*Ambiguity resolution in inheritance refer to the situation when more than one class have same name fuction and when we call
them there is ambiguity (not clearance)  which will execute when don't want that we want only specific function our need
should execute that is mean of ambiguity resolution*/

/*To resolve this ambiguity we make another function of same name in derived class and we will mention there which 
function of class we want to run that is known as ambiguity resolution because we solved the ambiguity
Here is example of ambigutiy and its resolution*/

#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"Welcome to my program!";
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Good Morning!";
        }
};

class Derived:public Base1,public Base2
{
    public:
        void greet(){
            // Base1::greet();
            Base2::greet();
        }
};

int main(){
    Derived d;
    d.greet();
    
}