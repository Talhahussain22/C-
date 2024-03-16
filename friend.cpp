// The friend function are those which are actually not a member of class like (we declare function inside class then define
// outside the class that was member function of class becuase they were accessible by any object of class) but the friend 
// function can access public and private member of class however it is not accessible by any object of class.
// Since it is not member of class so it need object as an argument to access the attributes of class like you can't 
// declare or check (a) in this function you can access it by ob1.a like this
// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a,b;
//     public:
//     friend Complex sumData(Complex o1,Complex o2 );

//     void SetData(int n1, int n2)
//     {
//         a=n1;
//         b=n2;
//     }
//     void printNumbers()
//     {
//         cout<<"Your complex number is "<<a<<" + "<<b<<"i";
//     }
// };

// Complex sumData(Complex o1,Complex o2)
// {
//     Complex o3;
//     o3.SetData(o1.a+o2.a,o1.b+o2.b);
//     return o3;


// }

// int main()
// {
//     Complex c1,c2,sum;
//     c1.SetData(1,2);
//     c1.printNumbers();
//     c2.SetData(3,4);
//     c2.printNumbers();
//     sum=sumData(c1,c2);
//     sum.printNumbers();

// }


