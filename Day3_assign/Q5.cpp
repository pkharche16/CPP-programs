//create a class, define different types of constructors. 
//in main create n number of objects. At the end display how many constructors are created for a class.
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int id;
    char *name;
    public:
    Employee()
    {
        cout<<"Default constructor called"<<endl;
    }
    Employee(int id,char name[])
    {
        this->id=id;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
        cout<<"in param"<<" "<<id<<name<<endl;
    }
    Employee(Employee &ref)
    {
        this->id=ref.id;
        this->name=new char[strlen(ref.name)+1];
        strcpy(this->name,ref.name);
        cout<<"in copy constructor"<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor called"<<"" <<id<<name<<endl;
    }
    void Disp()
    {
        cout<<"in disp"<<endl;
    }
};
int main()
{
    Employee e1;
    Employee e1(1,"sandeep");
    Employee *e2 = new Employee();
    Employee *e3 = new Employee(2,"Pratik");
    Employee e4 = e3;
    return 0;

}