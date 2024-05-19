 /*define a class "Emp" with "private int data=100"  
write a function template,which can accept anything as an argument and display it.
It can also accept "Emp" class object as an argument and display it 
( Hint:- insertion operator overloading )
*/

#include<iostream>
using namespace std;
class Emp
{
    private:
    int data=100;
    public:
    template<class T>
    void Display(T a)
    {
        cout<<a<<endl;
    }
    friend ostream &operator<<(ostream&,Emp&);

};
ostream &operator<<(ostream &o,Emp &ref)
{
    o<<ref.data;
    return o;
}
int main()
{
    Emp e;
    cout<<e;
}
