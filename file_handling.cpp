#include <iostream>
#include <fstream>
/*
fstream is header file which contain  classes for input/Output operations
The useful classes for input/output operations are:
1. fstreambase
2. ifstream -->derived from fstreambase
3. ofstream-->derived from fstreambase*/
using namespace std;
int main()
/* There are two ways to open file using ofstream class:
  1. Using constructor
  2. using method open() of class*/
{   

    // Using Constructor to open and write a file:
    // string text="It is sample text";
    // ofstream obj("sample.txt");
    // obj<<text;
    // obj.close();

    // Using Constructor to open and read a file:
    // string st;
    // ifstream input("sample.txt");
    // getline(input,st);
    // cout<<st;
    // input.close();


    // Using open() method
    string text2="It is sample2 text";
    ofstream obj2;
    obj2.open("sample2.txt");
    obj2<<text2<<endl;
    obj2<<text2;
    obj2.close();

    string st3;
    ifstream obj3;
    obj3.open("sample2.txt");
    while(obj3.eof()==0)
    {
        getline(obj3,st3);
        cout<<st3<<endl;

    }
}