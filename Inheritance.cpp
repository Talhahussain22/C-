#include <iostream>
using namespace std;

class Vehicle
{
    public:
    string brand="Ford";
    void horn()
    {
        cout<<"PO PO";
    }
};

class Car: public Vehicle
{
    public:
    string model="Mustang";
};

int main()
{
    Car car1;
    cout<<car1.brand<<" "<<car1.model<<endl;
    car1.horn();
    return 0;
}