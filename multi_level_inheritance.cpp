#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};
void Student::set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam:public Student{
    protected:
        float math;
        float physics;
    public:
        void set_numbers(float,float);
        void get_numbers();

};
void Exam::set_numbers(float m1,float m2){
    math=m1;
    physics=m2;
}
void Exam::get_numbers(){
    cout<<"The marks of maths is "<<math<<endl;
    cout<<"The marks of physics is "<<physics<<endl;
}

class Result:public Exam{
    float percentage;
    public:
    
        void display(); 
};
void Result::display(){
    get_roll_number();
    get_numbers();
    percentage=(math+physics)/2;
    cout<<"The percentage is "<<percentage<<endl;
}

int main(){
    Result r1;
    r1.set_roll_number(62);
    r1.set_numbers(98.0,100.0);
    r1.display();
}