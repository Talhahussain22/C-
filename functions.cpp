// #include <iostream>
// using namespace std;
// void myfunction()
// {
//     cout<<"Hello world!";
// }

// int main()
// {
//     myfunction();
//     return 0;
// }

// In this case we declare fuction at top and defined after main function if we not declare above main it will give error
// #include <iostream>
// using namespace std;
// void myfunction();
// int main()
// {
//     myfunction();
//     return 0;
// }

// void myfunction()
// {
//     {
//     cout<<"Hello world!";
// }
// }

// #include <iostream>
// using namespace std;

// void myfunction(int a, int b)
// {
//     cout<<"The sum is "<<a+b;
// }

// int main()
// {
//     myfunction(3,5);
//     return 0;
// }

// function overloading
// Multiple function with same name and different type of paremeter
// #include <iostream>
// using namespace std;

// int myfunction(int x ,int y)
// {
//     return x+y;
// }

// double myfunction(double x ,double y)
// {
//     return x+y;
// }

// int main()
// {
//     cout<<myfunction(3.5,5.4)<<endl;
//     cout<<myfunction(4,5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void myfunction(int mynumbers[10])
// {
//     for (int i=0;i<10;i++)
//     {
//         cout<<mynumbers[i]<<endl;
//     }
// }
// int main()
// {
//     int mynumber[10]={10,20,30,40,50,60,70,80,90,100};
//     myfunction(mynumber);
//     return 0;
// }

