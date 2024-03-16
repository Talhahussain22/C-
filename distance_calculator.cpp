#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x,y;
    public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    friend Point Distance_calculator(Point r,Point s);
};

Point Distance_calculator(Point r,Point s)
{
    float distance;
    distance=sqrt(pow(r.x-s.x,2)+pow(r.y-s.y,2));
    cout<<"The distance between points is "<<distance<<"units";
}
int main()
{
    Point p1(5,4),p2(1,1);
    
    Distance_calculator(p1,p2);
    
}