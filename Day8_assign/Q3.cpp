/*Write a class template, which can take 3 different type of arguments and print them.
a class must have only one constructor and that is a constructor 
which will take 3 arguments.
class must have disp function which will display the data.
*/
#include<iostream>
using namespace std;
template<class t1,class t2,class t3>
class test
{
    t1 a;
    t2 b;
    t3 c;
    public:
    test(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void disp()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    
};
int main()
{
   test<int,float,char> obj(10,20.5,'a');
    obj.disp();
    return 0;
}

