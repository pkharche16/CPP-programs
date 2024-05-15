/*2) 
Create a base class FourWheeler. Declare pure virtual function “void start()” in it. 			
Define following sub classes for this class. 
A) Qualis b) Sumo c) Volvo 					
Define “start” function in these classes.			
In main function , create array of pointer to FourWheeler which will contain objects of these three sub classes. 
Now traverse the array and call all the child class methods.
*/

#include<iostream>
using namespace std;
class FourWheeler
{
    public:
    virtual void start()=0;

};
class Qualis:public FourWheeler
{
    public:
    void start()
    {
        cout<<"Qualis started"<<endl;
    }

};
class Sumo:public FourWheeler
{
    public:
    void start()
    {
        cout<<"Sumo started"<<endl;
    }
};
class volvo:public FourWheeler
{
    public:
    void start()
    {
        cout<<"Volvo started"<<endl;
    }
};
int main()
{
    FourWheeler *ptr[3];
    ptr[0]=new Qualis;
    ptr[1]=new Sumo;
    ptr[2]=new volvo;
    for(int i=0;i<3;i++)
    {
        ptr[i]->start();
    }
}

