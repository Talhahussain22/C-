/*Syntax of inheritance:
class {{derived-class}} : {{visibility_mode}} {{base-class}}   

here main thing to understand is visibility mode it could be public or private:
if visibility mode is public it means that the public members of base(Parent class) will be public member of derived (clild class)
and if it is private then the public member of base class will be private memeber of derived class */


// #include <iostream>
// using namespace std;

// class Vehicle
// {
//     public:
//     string brand="Ford";
//     void horn()
//     {
//         cout<<"PO PO";
//     }
// };

// class Car: public Vehicle
// {
//     public:
//     string model="Mustang";
// };

// int main()
// {
//     Car car1;
//     cout<<car1.brand<<" "<<car1.model<<endl;
//     car1.horn();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Vehicle
// {
//     public:
//     string brand="Ford";
//     void horn()
//     {
//         cout<<"PO PO";
//     }
// };

// class Car: private Vehicle
// {
//     public:
//     string model="Mustang";
// };

// int main()
// {

//     /*As the visibiltiy mode of inheritance is private so that public memebers of base class became private member of derived
//     class so thats why they are not accessible outside the class*/
//     Car car1;
//     cout<<car1.brand<<" "<<car1.model<<endl;
//     car1.horn();
//     return 0;
// }

