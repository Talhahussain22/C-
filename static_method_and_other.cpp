// Static method is used when we want a variable which should not depend on an instance means its value should not update when
// we make an instance for example you want to calculate how many employee register today if you make a employee class that
// has a counter intialize with zero and you have method of taking detail of employee then increase counter with 1 in that case
// each time you make a object the value of counter began with 0 and in each case it will stay 1 to tackle with this case
// we make static variable which not depend on object and not began with zero each time it just began with zero and then each
// time increase its value with one. In simple when we want variable whose value does'nt began with orignal one when we create
// each instance then we make a static variable..

// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;

//     public:
//     void get_data()
//     {
//         cout<<"Enter id: ";
//         cin>>id;
//         count++;
//     }
//     void set_data()
//     {
//         cout<<"The id of employee "<<count<<" is "<<id<<endl;
//     }
//     void counter()
//     {
//         cout<<"The total number of employees are "<<count;
//     }

// };
// int Employee::count;
// int main()
// {
//     Employee Talha,Nabeed;
//     Talha.get_data();
//     Talha.set_data();

//     Nabeed.get_data();
//     Nabeed.set_data();

//     Talha.counter();
//    return 0;
// }

// IN above we discussed about static variable or member we also have concept of static function the static function is 
// mainly used to access the static variable of a class means we (can) access static variable just making function inside 
// the class which print static variable but that will not make sense that a variable not depend on instance in being access
// by instance name so that's why we used the static function to access the variable by using class name.In addition to this
// only the static variable are accessible in static function means you can't access a simple variable in a static function.
#include <iostream>
using namespace std;

class Employee
{
    string name;
    static int count;
    static string arr[4];

public:
    void get_data()
    {
        cout << "Enter name: ";
        cin >> name;
        arr[count] = name;
        count++;
    }
    void set_data()
    {
        cout << "The name of employee " << count << " is " << name << endl;
    }
    void static counter()
    {
        cout << "The total number of employees are " << count << endl;
    }

    void static display_arr()
    {
        for (string i : arr)
        {

            cout << i << endl;
        }
    }
};
int Employee::count = 2;
string Employee::arr[4] = {"Ali", "Sunan"};
int main()
{
    Employee Talha, Nabeed;
    Talha.get_data();
    Nabeed.get_data();
    Employee::counter();
    Employee::display_arr();
    return 0;
}