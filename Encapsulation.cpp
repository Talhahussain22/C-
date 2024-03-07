#include <iostream>
using namespace std;

class Car
{
    public:
    string name;
    string model;
    private:
    int id;

    public:
    int setid(int ids)

    {   int password;
        cout<<"Enter password:";
        cin>>password;
        if (password==1234)
        {
            id=ids;
            cout<<"id has been set"<<endl;}
        else
        {
            cout<<"Access Denied!!"<<endl;
        }
            
    }
    int getid()
    {
        return id;
    }

    Car(string nam,string mode)
    {
        name=nam;
        model=mode;

    } 
};

int main()
{
    Car car1={"BMW","X55"};
    car1.setid(5000);
    cout<<endl<<car1.getid();
    return 0;
    
}




#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

