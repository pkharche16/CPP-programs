// 4) Define a class , write two member functions 
// 	void disp1(){ //some code }
// 	void disp2(){ // some code }

// 	Try to call disp1   from    disp2.

#include<iostream>
using namespace std;
class Myclass
{
    public:
    void disp1()
    {
        cout<<"disp1"<<endl;

    }
    void disp2()
    {
        disp1();
        cout<<"disp2"<<endl;
    }
};
int main()
{
    Myclass obj;
    obj.disp2();
    return 0;
}