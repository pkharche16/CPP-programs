/*6)	Create a base class “Subject”.
Declare pure virtual function “void maxmarks()” in it. 
 Define following sub classes for this class. 
 A) Maths b) History c) English.
 	Define “maxmarks” in these classes. 
    In main function, create array of pointer to Subject,  which will contain objects of these three sub classes.
     Using RTTI, find out where is “History” and call its maxmarks() method.
*/
#include<iostream>
using namespace std;
class Subject
{
    public:
    virtual void maxmarks()=0;
};
class Maths:public Subject
{
    public:
    void maxmarks()
    {
        cout<<"Maths maxmarks=100"<<endl;
    }
};
class History:public Subject
{
    public:
    void maxmarks()
    {
        cout<<"History maxmarks=100"<<endl;
    }
};
class English:public Subject{
    public:
    void maxmarks()
    {
        cout<<"English maxmarks=100"<<endl;
    }
};
int main()
{
    Subject *s[3];
    s[0]=new Maths;
    s[1]=new History;
    s[2]=new English;
    for(int i=0;i<3;i++)
    {
        s[i]->maxmarks();
        History *h = dynamic_cast<History*>(s[i]);
        h->maxmarks();
    }
}
