#include <iostream>
using namespace std;

template<class T1,class T2>
float average(T1 a ,T2 b)
{
    float avg= (a+b)/2.0;
    return avg;
}
int main()
{
    float averg=average(7.5,2.5);
    cout<<averg;
}