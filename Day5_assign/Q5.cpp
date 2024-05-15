/*5) create a class Base with "int num1" ,parameterized constructor and destructor.
 Derive class Sub1 from Base with "int num2" ,parameterized constructor and destructor.
  Now derive class Sub2 from Sub1 with "int num3" ,parameterized constructor and destructor.
in the main function create the object of Sub1 and notice constructor and destructor invocation.
*/

#include<iostream>
using namespace std;
class Base
{
    int num1;
    public:
    Base(int a)
    {
        cout<<"Base constructor"<<endl;
    }
    ~Base()
    {
        cout<<"Base destructor"<<endl;
    }
};
class Sub1:public Base
{
    int num2;
    public:
    Sub1(int a,int b):Base(a)
    {
        cout<<"Sub1 constructor"<<endl;
    }
    ~Sub1()
    {
        cout<<"Sub1 destructor"<<endl;
    }
};
class Sub2:public Sub1
{
    int num3;
    public:
    Sub2(int a,int b,int c):Sub1(a,b)
    {
        cout<<"Sub2 constructor"<<endl;
    }

};
int main()
{
    Sub1 s(10,20);
    return 0;
}
