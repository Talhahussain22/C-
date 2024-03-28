#include <iostream>
using namespace std;

// class Employee{
//     protected:
//         string name;
//         int id;
//     public:
//         Employee(string get_name,int get_id)
//         {
//             name=get_name;
//             id=get_id;
           
//         }
//         void display(){
//             cout<<"The employee "<<name<<" has id "<<id;
//         }
      
// };

// class Programmer:public Employee{
//     protected:
//         string lang;
//     public:
//     // Syntax of using constructor of base class into derived class
//         Programmer(string get_name,int get_id,string language):Employee(get_name,get_id)
//         {
//             lang=language;
//         }
//         void display(){
//             cout<<"The name of employee is "<<name<<" and has id "<<id<<" and know "<<lang<<" language";
//         }
// };

// int main(){

//     Programmer P("Talha",62,"python");
//     P.display();
    
// }

class Base1{
    protected:
        int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Constructor of Base1 called"<<endl;
        }
};
class Base2{
    protected:
        int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Constructor of Base2 called"<<endl;
        }
};

class Derived:public Base1,public Base2{
    protected:
        int derived1,derived2;
    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b){
                derived1=c;
                derived2=d;
                cout<<"Constructor of derived class called"<<endl;
        }
};

int main(){
    Derived d(10,20,30,40);
}