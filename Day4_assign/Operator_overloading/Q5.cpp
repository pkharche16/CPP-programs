// 5) Define a class with constructor and  member function

// 	create object, call member function
// 	now create a reference to that object, and using that reference try to call member function

#include<iostream>
using namespace std;
class Myclass
{
    private:
    int num;
    public:
    Myclass(int n)
    {
        num=n;
    }
    void disp()
    {
        cout<<"the num is\t"<<num<<endl;
    }
};
int main()
{
    Myclass m(100);
    cout<<"calling function using object"<<endl;
    m.disp();
    cout<<"calling function using refenrence"<<endl;
    Myclass &ref =m;
    m.disp();
    return 0;
}