// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     int* ptr=&a;
//     cout<<ptr;
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
// {
//     int arr[5]={10,20,30,40,50};
//     for (int i:arr)
//     {
//         cout<<i<<endl;
        
//     }
//     return 0;
// }

// {
//     int arr[5]={10,20,30,40,50};
//     for (int i =0;i<sizeof(arr);i++)
//     {
//         cout<<arr[i]<<endl;

//     }
//     return 0;
// }

{
    int arr[5]={1,2,3,4,5};
    int* p=arr;
    cout<<*++p;
    return 0;

}