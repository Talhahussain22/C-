#include <iostream>
using namespace std;

class Employee
{
    private:
    int id;
    int password;

    public:
    int age;
    string name;

    void get_id()
    {
        cout<<"Enter your id:";
        cin>>id;
    }

    void get_password()
    {
        cout<<"Enter your password:";
        cin>>password;
    }

    void check();

};

void Employee::check()
{
    if (id==22 && password==123)
    {
        cout<<"Your name is "<<name;
    }
}
int main()
{
    Employee emp1;
    emp1.name='Talha';
    emp1.age=18;
    emp1.get_id();
    emp1.get_password();
    emp1.check();
    return 0;

}
