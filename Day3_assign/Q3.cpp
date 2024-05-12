// 3)create a class "MyClass1"
// with members and member function "disp1().
// create another class "MyClass2"
// with members and member function "disp2().
// now try to invoke disp1() from disp2()
// in the main() function, create instances of both the classes and invoke their member functions.
#include<iostream>
using namespace std;
class Myclass1
{
    int num;
    public:
    void Disp1()
    {
        cout<<"This is disp1()"<<endl;
    }

};
class Myclass2
{
    int num;
    public:
    void Disp2(Myclass1 &ref)
    {
        cout<<"This is disp2()"<<endl;
        ref.Disp1();
    }
};
int main()
{
    Myclass1 m1;
    Myclass2 m2;
    m1.Disp1();
    m2.Disp2(m1);
    return 0;
    
}