#include <iostream>
using namespace std; 
template<class T1,class T2>
class myClass{
    T1 data1;
    T2 data2;
    public:
    myClass(T1 a,T2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<data1<<endl<<data2<<endl;
    }
    void add(myClass obj2)
    {
        cout<<this->data1+obj2.data1;
    }
};
int main()
{
    myClass<int,float> obj(12,2.5);
    myClass<int,float> obj2(13,3.5);
    obj.display();
    obj.add(obj2);
    return 0;
}
