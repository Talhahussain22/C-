#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
class Basic_Calculator{
    protected:
        float x,y;
    public:
        void basic_set_data(float,float);
        float add_numbers();
        float subtract_numbers();
        float divide_numbers();
        float multiply_numbers();
        void display_results();
};
void Basic_Calculator::basic_set_data(float a,float b){
    x=a;
    y=b;
}
float Basic_Calculator::add_numbers(){
    return x+y;

}
float Basic_Calculator::subtract_numbers(){
    return x-y;

}
float Basic_Calculator::multiply_numbers(){
    return x*y;

}
float Basic_Calculator::divide_numbers(){
    return x/y;
}
void Basic_Calculator::display_results(){
    cout<<"The sum  is "<<add_numbers()<<endl;
    cout<<"The difference is "<<subtract_numbers()<<endl;
    cout<<"The multiplication is "<<multiply_numbers()<<endl;
    cout<<"The division  is "<<divide_numbers()<<endl;
}

class Scientific_Calculator{
    protected:
        float x ;
    public:
        void scientific_set_data(float);
        float sine();
        float cosine();
        float tane();
        float log();
        void  scientific_display();
};


void Scientific_Calculator::scientific_set_data(float a){
    x=a;
}

float Scientific_Calculator::cosine(){
    return cos(x*3.14/180);
}
float Scientific_Calculator::sine(){
    return sin(x*3.14/180);
}
float Scientific_Calculator::tane(){
    return tan(x*3.14/180);
}

float Scientific_Calculator::log(){
    return log10(x);
}


void Scientific_Calculator::scientific_display(){
    cout<<"The value of sin is "<<sine()<<endl;
    cout<<"The value of cosine is "<<cosine()<<endl;
    cout<<"The value of tan is "<<tane()<<endl;
    cout<<"The value of log is "<<log()<<endl;
}
class Hybrid_cal:public Scientific_Calculator,public Basic_Calculator{};

int main(){
//   Basic_Calculator b1;
//   b1.basic_set_data(10.0,2.0);
//   b1.display_results();
    // Scientific_Calculator s1;
    // s1.scientific_set_data(30);
    // s1.scientific_display();

    Hybrid_cal h1;
    h1.basic_set_data(10.0,2.0);
    h1.display_results();
    h1.scientific_set_data(60);
    h1.scientific_display();
    
}