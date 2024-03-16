#include <iostream>
using namespace std;

// class Store
// {
//     static string l[5];
//     // static int counter;
//     string item;
//     public:


//     void add(int i)
//     {
//         cout<<"Enter the name of item: "<<i;
//         cin>>item;
//         l[i]=item;
        
//     }

//     void display()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout<<"The items in a list are "<<l[i]<<endl;
//         }
        
//     }

// };
// int Store::counter=0;
// int main()
// {
//     Store s;
//     for (int i = 0; i <5; i++)
//     {
//         s.add(i);
//     }
//     s.display();
//     return 0;
    
// }


#include <iostream>
using namespace std;

class Store
{
    string item;
    public:
    void add_item()
    {
        cout<<"Enter the name of item: ";
        cin>>item;
    }
    void display_item();
};

int main()
{
    Store s[4];
    for (int i = 0; i < 4; i++)
    {
       s[i].add_item();
    }
    
}

