// #include <iostream>
// using namespace std;
// int main()
// {
//     string food="Pizza";
//     string* ptr1=&food;
//     int num=1;
//     int* ptr2=&num;
//     cout<<ptr1<<endl;
//     cout<<ptr2;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     string food="Pizza";
//     string* ptr1=&food;

//     cout<<ptr1<<endl;
//     cout<<*ptr1;
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    string food="Pizza";
    string* ptr1=&food;

    cout<<food<<endl;
    cout<<*ptr1<<endl;

    *ptr1="Burger";
    cout<<*ptr1<<endl;
    cout<<food;
    
    return 0;
}