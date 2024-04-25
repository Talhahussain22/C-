/*Sturcture Union and Enum are all user defined data type*/
#include <iostream>
using namespace std;

// struct Employee
// {
//     string name;
//     int id;
//     int salary;
// };
// int main()
// {
//     Employee emp1,emp2;
//     emp1.name="Talha";
//     emp1.id=62;
//     emp1.salary=200000;
//     emp2.name="Nabeed";
//     emp2.id=54;
//     emp2.salary=200000;
//     cout<<"EMP1"<<endl<<emp1.name<<endl<<emp1.id<<endl<<emp1.salary<<endl;
//     cout<<"EMP2"<<endl<<emp2.name<<endl<<emp2.id<<endl<<emp2.salary;
//     return 0;
// }

/*In union only one attribute of user defined data type(union) can be set other will take random value
*/
// union money
// {
//     int rice;
//     char car;
//     float pound;
// };
// int main()
// {
//     money m1;
//     m1.car='A';
//     cout<<m1.car<<endl;
//     m1.rice=1000;
//     cout<<m1.rice<<endl;
//     cout<<m1.car<<endl;
//     m1.pound=20.7;
//     cout<<m1.pound<<m1.car<<m1.rice<<endl;
//     return 0;
// }


// int main()
// {
//     int a,b;
//     char operation;

//     cout<<"Enter the value of a:";
//     cin>>a;
//     cout<<endl<<"Enter the Operation:";
//     cin>>operation;
//     cout<<endl<<"Enter value of b:";
//     cin>>b;

//     switch (operation)
//     {
//     case '+':
//         cout<<"The sum is "<<a+b;
//         break;
    
//     case '-':
//         cout<<"The differnce is "<<a-b;
//         break;
//     }
//     return 0;}



// int main()
// {
//     enum Meal {breakfast,lunch,dinner};
//     for (int i=0;i<3;i++)
//     {
//         if (i==breakfast)
//         {
//         continue;}
//         else
//         {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }




// int sum(int a,int b);

// int main()
// {
//     cout<<sum(3,4);
//     return 0;
// }

// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;
// }


// void swap(int &x,int &y)
// {
//     int temp=x;
//     x=y;
//     y=temp;

    


// }
// int main()
// {
//     int a,b;
//     a=6;
//     b=10;

//     cout<<"The value of a and b before swaping is "<<a<<" and "<<b<<endl;
//     swap(a,b);
//     cout<<"The value of a and b after swaping is "<<a<<" and "<<b<<endl;
//     // return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec;
//     vec.push_back(5);
//     vec.insert(vec.begin()+1,8);
//     for (int i:vec)
//     {
//         cout<<i<<endl;
//     }



// FUNCTION PROTOTYPE:


// #include <iostream>
// using namespace std;

// int factorial(int n);
// int main()
// {
//     int x;
//     cout<<"Enter the value to find factorial:";
//     cin>>x;
//     cout<<factorial(x);
//     return 0;
// }

// int factorial(int n)
// {
//     if (n==0 or n==1){
//         return 1;}
//     else
//     {
//         return n* factorial(n-1);
//     }
// }



#include <iostream>
using namespace std;
// int fabonacii(int n)
// {
//     if (n<2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fabonacii(n-1)+fabonacii(n-2);
//     }
// }
// int main()
// {
//     int x;
//     cout<<"Enter the term to find:";
//     cin>>x;
//     for(int i=0 ;i<=x;i++)
//     {
//         cout<<fabonacii(i)<<" ";
//     }
   
//     return 0;
// }

void sum(int x,int y)
{
    cout<<"Int wala call hoa!"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}

void sum(double x,double y)
{
    cout<<"float wala call hoa!"<<endl;
    cout<<"The sum is "<<x+y<<endl;
}

int main()
{
    sum(4,2);
    sum(4.0,5.0);
}