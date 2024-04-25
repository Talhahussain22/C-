/*In many cases we have to use different data type for same class let say we want to calculate dot product of two vector
so vector can be integers,float,double so for all that we have to make diff classes:
But templete is better solution which protect us to write diff classes templete tell program that I will specify my
data type later on while making objects: */
#include <iostream>
using namespace std;
template <class T>
class vector{
   
    T d=0;
    public:
    T* arr;
    int size;
        vector(int m)
        {
            size=m;
            arr=new T[size];
        }
        T dotProduct(vector &v)
        {
            for (int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];}
            return d;
        }
       
};
int main()
{
    vector<float> v1(3);
    v1.arr[0]=5.5;
    v1.arr[1]=2.3;
    v1.arr[2]=3.3;

    vector<float> v2(3);
    v2.arr[0]=2.1;
    v2.arr[1]=5.3;
    v2.arr[2]=2.4;
    float product=v1.dotProduct(v2);
    cout<<product;

}

