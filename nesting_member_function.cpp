#include <iostream>
using namespace std;
// nesting member function simply means calling a function into another function
class binary
{   public:
    string s;
    void chk_binary(string s);
    void one_compliment();
    void get_binary()
    {
        cout<<"Enter a  number:";
        cin>>s;
    }



};

void binary :: chk_binary(string s)
{
    for (int i=0 ;i < s.length();i++)
    {   
        if (s.at(i) != '0' and s.at(i)!='1')
        {
            cout<<"Invalid Binary number";
            exit(0);
        }
    }
}

void binary :: one_compliment()
{
    chk_binary(s);
    for (int i=0 ;i<s.length();i++)

    {
        
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

int main()
{
    binary b;
    b.get_binary();
    cout<<"The number before one compliment is: "<<b.s<<endl;
    b.one_compliment();
    cout<<"\n"<<"The number after one compliment is: "<<b.s;
    return 0;
}