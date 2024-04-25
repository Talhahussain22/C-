#include <iostream>
using namespace std;

// double Average(int marks[],int size)
// {
//     int sum=0;
//     for (int i=0;i<size;i++)
//     {
//         sum+=marks[i];
//     }
//     double average=sum/size;
//     return average;
// }

// int main()
// {
//     int marks[5]={10,20,30,40,50};
//     int size=sizeof(marks)/sizeof(int);
//     cout<<"The average is "<<Average(marks,size);
// }


struct Scale
{
    int feet;
    int inches;
};

struct Room
{
   Scale leng;
   Scale width;
};

int main()
{   
    Room R;
    R.leng.feet=5;
    R.leng.inches=6;
    R.width.feet=3;
    R.width.inches=6;
    double len=R.leng.feet+R.leng.inches/12.0;
    float width=R.width.feet+R.width.inches/12.0;
    cout<<"The area of room is "<<len*width;
    
    return 0;
}