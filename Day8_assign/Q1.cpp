/*1) Write a class (not a class template) and inside it create a function template as a member function.
 Invoke it from main function.
*/
#include <iostream>
using namespace std;
class A
{
    public:
    template <class T1>
    void print(T1 a)
    {
        cout<<a<<endl;
    }
};
int main()
{
    A a;
    a.print(10);
    a.print('A');
    
}
