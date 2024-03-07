#include <iostream>
using namespace std;

// int facto(int x)
// {
//     int fact=1;
//     if (x==0)
//     {
//         return 1;
//     }
//     for (int i=1;i<=x;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int main()
// {
//     int a;
//     cout<<"Enter a number till there you want to calculate factorial:";
//     cin>>a;
//     for(int k=0;k<=a;k++)
//     {
//         cout<<k<<"!="<<facto(k)<<endl;
//     }
//     return 0;
// }


int main()
{
    string s;
    int count_words=0;
    int count_characters=0;
    cout<<"Enter a sentence to calculate word and characters in it:";
    getline(cin,s);
    if(s=="")
    {
    cout<<"The number of characters in sentence are "<<count_characters<<endl;
    cout<<"The number of words in sentence are "<<count_words;
    exit(0);
    }
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' ' and s[i+1]!=' ')
        {
            count_words++;
        }
        else
        {
            if(s[i]!=' ')
            {
            count_characters++;}
        }
        
    }
    cout<<"The number of characters in sentence are "<<count_characters<<endl;
    cout<<"The number of words in sentence  are "<<count_words+1;
    return 0;
}