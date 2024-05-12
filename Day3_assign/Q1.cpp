/*Task 1: Create a class with constructors and destructors. 
Create an array of instances and observe how the program behaves.*/


#include<iostream>
#include<cstring>
using namespace std;
class Myclass
{
    private:
    int id;
    char *name;
    public:
    Myclass()
    {
        cout<<"Default constructor"<<endl;
    }
    Myclass(int id,const char name[])
    {
        this->id=id; 
        this->name = new char[strlen(name)+1];
        strcpy_s(this->name,strlen(name)+1,name);   
        cout<<"param constructor call"<< " "<<id<<name<<endl;

    }
    ~Myclass()
    {
        cout<<"destructor call" <<" "<<id <<name<<endl;
        delete[] name;

    }
};
int main()
{
    Myclass arr[3] = {Myclass(1,"pratik"),Myclass(2,"pratik"),Myclass(3,"pratik")};
    return 0;
    
       
}