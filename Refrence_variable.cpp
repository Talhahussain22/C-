/*before understanding refrence variable lets see what is copy of variable ??
copy of variable is created by just specifying data type and take equal to orignal variable like string food=meal;
here meal was variable already created and we make copy of it as food cout of food and meal will be same:
and refrence variable created by & symbol before declaration like string &food=meal;
The diff between copy and refrence of variable is changing content in copy does'nt effect orignal or viceverse
but in refrence variable it change content in both variable in Example 1 we make copy in Example 2 we make ref:
// Additionally & operator used to check location of variable so copy and orignal variable have diff location while
refrence and original have same location*/

// EXAMPLE 1:
#include <iostream>
using namespace std;
int main()
{
    string food="Pizza";
    string meal=food;
    food[0]='T';
    cout<<food<<endl;
    cout<<meal<<endl;
     cout<<&food<<endl;
    cout<<&meal<<endl;
    return 0;
}

// EXAMPLE 2:

#include <iostream>
using namespace std;
int main()
{
    string food="Pizza";
    string& meal=food;
    food[0]='T';
    cout<<food<<endl;
    cout<<meal<<endl;
    cout<<&food<<endl;
    cout<<&meal<<endl;
    return 0;
}