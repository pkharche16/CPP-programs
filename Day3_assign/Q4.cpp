// 4) create a class.
// accept from user, how many instances are required.
// Accordingly create array of instances dynamically.
// Now make sure that u call destructor for each and every instances.
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
    int id;
    char *name;
    public:
    Employee()
    {
        cout<<"Default constructor"<<endl;
    }
    Employee(int id,char name[])
    {
        this->id=id;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        cout<<"in param"<<" "<<id<<name<<endl;
    }
    ~Employee()
    {
        cout<<"destructor"<<"" <<id<<name<<endl;
    }
    void disp1()
    {
        cout<<"in disp"<<endl;
    }
};
int main()
{
    int n;
    cout<<"How many employee you want:"<<endl;
    cin>>n;
    Employee *emp = new Employee[n];
    for(int i=0;i<n;i++)
    {
        emp[i].disp1();
    }
    delete[]emp;
return 0;
}