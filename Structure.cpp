// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     struct 
// //     {
// //         int mynumbers;
// //         string mystring;
// //     } mystructure;

// //     mystructure.mynumbers=1;
// //     mystructure.mystring="Hello World";

// //     cout<<mystructure.mynumbers<<endl;
// //     cout<<mystructure.mystring<<endl;
// //     return 0;
// // }

// // {
// //     struct{
// //         int mynumber;
// //         string mystring;

// //     } mystrcuture1,mystrcuture2;

// //     mystrcuture1.mynumber=1;
// //     mystrcuture1.mystring="Hello world";
// //     mystrcuture2.mynumber=2;
// //     mystrcuture2.mystring="Why?";

// //     cout<<mystrcuture1.mynumber<<endl;
// //     cout<<mystrcuture1.mystring<<endl;
// //     cout<<mystrcuture2.mynumber<<endl;
// //     cout<<mystrcuture2.mystring<<endl;


// // }

// // #include <iostream>
// // using namespace std;
// // struct car {
// //     string name;
// //     string model;
// //     int year;
// //     void greet()
// //     {
// //         cout<<"Good Morning";
// //     }

// //     int sum(int a,int b)
// //     {
// //         return a+b;
// //     }
// // };
// // int main()


// // {
// //     int x=5,y=6;
// //     car Mycar1;
// //     Mycar1.name="BMW";
// //     Mycar1.model="X5";
// //     Mycar1.year=1999;
    

// //     car Mycar2;
// //     Mycar2.name="Ford";
// //     Mycar2.model="Mustang";
// //     Mycar2.year=1969;

// //     cout<<Mycar1.name<<" "<<Mycar1.model<<" "<<Mycar1.year<<endl;
// //     Mycar1.greet();
// //     cout<<endl<<"The sum of "<<x<<" and "<<y<<" is "<<Mycar1.sum(x,y);
// //     cout<<endl<<Mycar2.name<<" "<<Mycar2.model<<" "<<Mycar2.year<<endl;

// //     return 0;

// // }
    

// #include <iostream>
// using namespace std;
// struct Employee{
//     string name;
//     int age;
//     float salary;
//     void greeting()
//     {
//         cout<<"Good Morning "<<name<<endl;
//     }
// };
// int main()
// {
//     Employee e;
//     cout<<"Enter you name:";
//     getline(cin,e.name);
//     cout<<"Enter you age:";
//     cin>>e.age;
//     cout<<"Enter your salary:";
//     cin>>e.salary;
//     cout<<"\n";
//     e.greeting();
//     cout<<"Your age is "<<e.age<<endl;
//     cout<<"Your salary is "<<e.salary;
//     return 0;
// }
    

#include <iostream>
using namespace std;
struct Employee
{
    string name;
    int age;
    float salary;
};
Employee getdata(Employee e)
{
    cout<<"Enter your name:";
    cin>>e.name;
    cout<<"Enter your age:";
    cin>>e.age;
    cout<<"Enter your salary:";
    cin>>e.salary;
    return e;
}
int main()
{
    Employee e1;
    Employee e2;
    e1=getdata(e2);

    
    cout<<e1.name;
}