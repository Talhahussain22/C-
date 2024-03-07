// #include <iostream>
// using namespace std;
// class Myclass
// {
//     public :
//     string name="Talha";
//     int id=62;
//     int age=19;
// };

// int main()
// {
//     Myclass myobj1;
//     cout<<myobj1.name<<" "<<myobj1.age<<" "<<myobj1.id;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Myclass
// {
//     public :
//     string name;
//     int id;
//     int age;

//     Myclass(string x, int y , int z)
//     {
//         name=x;
//         id=y;
//         age=z;

        
//     }
// };

// int main()
// {
//     Myclass myobj1={"Talha",62,19};
//     cout<<myobj1.name<<" "<<myobj1.age<<" "<<myobj1.id;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Greet{
//     public:
//     void myfuction()
//     {
//         cout<<"Good Morning";
//     }
// };

// int main()
// {
//     Greet greet1;
//     greet1.myfuction();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Sum{
//     public:
//     int myfunction(int x,int y)
//     {
//         return x+y;
//     }
// };

// int main()
// {
//     Sum sum1;
//     cout<<sum1.myfunction(2,8);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Employee
// {
//     private:
//     int id;
//     public:
//     int age;

//     Employee(int x,int y)
//     {
//         id=x;
//         age=y;
//     }
// };

// int main()
// {
//     Employee emp1={62,19};
//     cout<<emp1.age;
// }

// function defination outside the class:
// #include <iostream>
// using namespace std;

// class Myclass
// {
//     public:
//     string name;
//     string age;

//     void myfunction();
// };

// void Myclass::myfunction()
// {
//     cout<<"Hello world";
// }

// int main()
// {
//     Myclass obj1;
//     obj1.myfunction();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Numbers
// {
//     private:
//     int a,b,c;
//     public:
//     int d,e;

//     void setdata(int a1,int b1,int c1);
//     void getdata()
//     {
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//     }
// };
// void Numbers :: setdata(int a1,int b1 , int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }

// int main()
// {
//     Numbers num;
//     num.d=55;
//     num.e=66;
//     num.setdata(22,33,44);
//     num.getdata();
//     return 0;
// }

