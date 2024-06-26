/*5)	Create a base class “StorageDevice”.Declare  pure virtual function            
 “void store()” in it.  									
 	Define following sub classes for this class. 									
    A) HardDisk b) CD c) PenDrive.			
define  “store()” in these classes.

now write a global function "perform()" which will accept "StorageDevice class reference" as an argument.
 In this function using RTTI invoke  "store()" method of  only “PenDrive”. [ handle bad_cast exception ]

From main function try to call “perform()” function by passing various child classes.
*/

#include<iostream>
using namespace std;
class StorageDevice
{
    public:
    virtual void store()=0;
};
class HardDisk:public StorageDevice
{
    public:
    void store()
    {
        cout<<"HardDisk"<<endl;
    }
};
class CD:public StorageDevice
{
    public:
    void store()
    {
        cout<<"CD"<<endl;
    }
};
class PenDrive:public StorageDevice
{
    public:
    void store()
    {
        cout<<"PenDrive"<<endl;
    }
};
void perform(StorageDevice &s)
{
    try
    {
      
        PenDrive &p = dynamic_cast<PenDrive&>(s);
        p.store();
        

    }
    catch(bad_cast &r)
    {
        cout<<"Bad cast exception"<<r.what()<<endl;
    }
}
int main()
{
    PenDrive t;
    perform(t);
}
