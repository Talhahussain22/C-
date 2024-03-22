/*when the compiler know that certain object will not use again at that time compiler destruct that object but in c++ the memory
allocated to that object remains and (destructor that we make in class will call after destruction of object ) to deallocate
that memory we can write certain program in that destrctor thats the reason we learnt the concept of destrctor.*/
#include <iostream>
using namespace std;

int count=0;
class Num
{
    public:
    // this is constructor
    Num()
    {
        count++;
        cout<<"This is the construction of object number"<<count<<endl;
    }
    // This is destrctor
    ~Num()
    {
        cout<<"This is the destruction of object number"<<count<<endl;
        count--;
    }
};




int main()
{

cout<<"Entering the main function"<<endl;
cout<<"Creating first object n1"<<endl;
Num n1;
// {} represt here block when object is created in block and when block is exits the object destruct at that time(n2 and n3):
// similarly when object is created in main body and when body exists the object is destruct as n1
{
    cout<<"Entering the block to create two more objects n2 and n3"<<endl;
    Num n2,n3;
    cout<<"Exiting the block"<<endl;
    
}

cout<<"Back to main"<<endl;
 return 0;   
}