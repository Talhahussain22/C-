// This is the way to initialize the values of constructor outside the body of constructor or inline intialization!
#include <iostream>
using namespace std;

class Test
{
    int data1;
    int data2;

public:
    Test(int i, int j) : data1(i), data2(j)
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
    }
};

int main()
{
    Test t(10, 20);
}