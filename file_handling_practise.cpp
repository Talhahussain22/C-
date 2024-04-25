#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int marks;
    ofstream obj("marks.txt");
    ifstream obj2("marks.txt");
    string st;
    
    for (int i=0 ;i<3;i++){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your marks:";
        cin>>marks;
        obj<<name<<"   "<<marks<<endl;
        }
        obj.close();

    for (int i=0 ;i<3;i++){
        getline(obj2,st);
        cout<<st<<endl;

        }      
}   