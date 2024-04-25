#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id=a;
            price=b;
        }

        void getData(){
            cout<<"The id of item is "<<id<<endl;
            cout<<"The price of item is "<<price<<endl;
        }



};      

int main()
{
    int size=3;
    Shop *ptr=new Shop[size];

    (ptr)->setData(10,1000.0);
    // // (ptr)->getData();

    (ptr+1)->setData(11,1100.0);
    // // (ptr+1)->getData();

    (ptr+2)->setData(12,1200.0);
    // // (ptr+2)->getData();
  
    for (int i = 0; i < size; i++)
    {
        ptr->getData();
        ptr++;
    }
    



    // Creating objects as a array:
    
    // Shop arr[3];
    // arr[0].setData(10,1000.0);
    // arr[1].setData(22,2000.0);
    // arr[2].setData(23,3000.0);
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].getData();
    // }


    return 0;    
}   
