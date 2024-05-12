// 2) create a class with constructors and destructor.
// create 2 instances on stack and 1 instance on heap. 
//observe the invocation of constructors and destructors.
#include <iostream>
#include<String.h>
using namespace std;
class Myclass
{
    private:
    int id;
    char *name;
    public:
    Myclass()
    {
        cout<<"Default constructor called"<<endl;
    }
    Myclass(int id, char name[])
    {
        this->id=id;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        cout<<"In param"<<" "<<id<<name<<endl;
    }
    ~Myclass()
    {
        cout<<"in destructor"<<endl;
        delete []name;
    }
};
int main()
{
    Myclass obj[2] = {Myclass(1,"Pratik"),Myclass(2,"sameer")};
    Myclass *ptr = new Myclass(3,"Rahul");
    delete ptr;
    
    return 0;


}