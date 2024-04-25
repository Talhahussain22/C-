#include <iostream>
using namespace std;
int main()
{   
    string food="pizza";
    string* ptr=&food;

    int a=4;
    int* ptr1=&a;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;


    /*IN above we wrote 2 lines and used two differnet varaibles to store values and its s address
    if we want to perform this in single line we will use new keyword*/

    string* p= new string("Food");
    cout<<"The value at address p is "<<*p<<endl;

    int *arr=new int[3];
    arr[0]=10;
    // another way to allocate a value:
    *(arr+1)=20;
    arr[2]=30;

    // delete[] arr;
    cout<<"The value at arr[0] is "<<(arr[0])<<endl;
    cout<<"The value at arr[1] is "<<(arr[1])<<endl;
    cout<<"The value at arr[2] is "<<(arr[2])<<endl;
    


    
    return 0;

}