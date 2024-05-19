/* define a function template which can take any type of pointer as an argument 
and by dereferencing it ,
 display the data.
 Now overload this function template, for int pointer.
Call these functions (function templates and normal function)
 from main by passing address of various different variables.
 */

#include<iostream>
using namespace std;

class sample
{
    public:
    template <class T>
    void display(T *ptr)
    {
        cout<<*ptr<<endl;
    }

};
int main()
{
    int a=10;
    float b=20.5;
    char c='a';
    sample s;
    s.display(&a);
    s.display(&b);
    s.display(&c);
    return 0;
}

