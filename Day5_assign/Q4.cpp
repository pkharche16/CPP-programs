/*4)Define three classes A, B, C carrying one integer member in each of them. 
Let C be derived from A and B.
 Write constructors and destructors in each of these classes that prompt some message from each class.
  Also the constructor of C should accept three values, one for its own member and other two for A and B.
   The C constructor should see that the two values goes to respective constructors of A and B. 
   What is the order in which constructors and destructors get called upon? How can you change this order?
*/
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int x)
    {
        cout<<"A constructor called\t"<<endl;
    }
    ~A()
    {
        cout<<"A destructor called\t"<<endl;
    }
    int getA()
    {
        return a;
    }
    
};
class B
{
    int b;
    public:
    B(int x)
    {
        cout<<"B constructor called\t"<<endl;
    }
    ~B()
    {
        cout<<"B destructor called\t"<<endl;
    }
    int getB()
    {
        return b;
        }
       
};
class C:public A,public B
{
    int c;
    public:
    C(int x,int y,int z):A(x),B(y)
    {
        cout<<"C constructor called\t"<<endl;
    }

};
int main()
{
    C obj(10,20,30);

}