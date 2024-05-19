/*Write a class template, which can take 3 different type of arguments.
 Do not define any constructor for this class template.
class must have 3 setter methods and 3 getter methods.
*/
#include <iostream>
using namespace std;
class A
{
    public:
    template<class T,class T2,class T3>
    void set1(T a,T2 b,T3 c)
    {
        a1=a;
      a2=b;
       a3=c;

    }
    int get1(int a1)
    {
        return a1;

    }
    int get2(int a2)
    {
        return a2;
    }
    int get3(int a3)
    {
        return a3;
    }
};
int main()
{
    A a;
    a.set1(1,2,3);

}