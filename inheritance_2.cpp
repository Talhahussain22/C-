/*Syntax of inheritance:
class {{derived-class}} : {{visibility_mode}} {{base-class}}   

here main thing to understand is visibility mode it could be public or private:
if visibility mode is public it means that the public members of base(Parent class) will be public member of derived (clild class)
and if it is private then the public member of base class will be private memeber of derived class

By default the visibility mode is private*/

/*
NOTE:
The private member of base class  can't be inherited*/


#include <iostream>
using namespace std;

class Employee
{
    public:
    int id;
    string name;
     Employee(){} 
        Employee(string inpname,int inpid){

        name=inpname;
        id=inpid;}
};
/* here we did'nt mentioned about visibility mode so by default it will be private that's reason we have to do this struggle
to access the public attributes of base class because it will be private of derived class as mentioned above.
*/
class Programmer: Employee{
    public:
        Programmer(string inpname,int inpid){
            name=inpname;
            id=inpid;
        }
        string language="Python";

        void get_Data(){
            cout<<id<<endl;
            cout<<name<<endl;
        }
        
};


int main()
{
   Programmer p1("Talha",10);
   p1.get_Data();
}