/*Polymorphism means of name multiple forms 
function overloading(multiple functions with same name but diff arguments) is example of polymorphism
operator overlading also another example of polymorphism (in which simple operator like * use in many forms like 
calculating vector and dot  product of two vectors)*/
/*
There are two types of polymorphism
-->Compiler time polymorphism (example includes function and operator overloading in which compiler know before compiling that which
function is going to run)
-->Run time polymorphims (example is virtual function which we will discussed later in which on run time the decision is 
taken that which function is going to run)*/


#include <iostream>
using namespace std;
void sum(int a,int b)
{
    cout<<"Integer sum is "<<a+b;
}
void sum(double a,double b)
{
    cout<<"Double sum is "<<a+b;
}
int main()
{
    
    sum(10.05,20.05);
}