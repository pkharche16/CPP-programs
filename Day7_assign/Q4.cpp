/*4)	Create a base class Cricket. 
Declare pure virtual function “void play()” in it. 			
Define following sub classes for this class.                                                 		
A) FiftyOver  b) Test  c) TwentyOver	
“Test” class will have one more function “daywise_summary()”.  
	Create an array of pointer to “Cricket” class having 3 elements. 
    Store child class objects into this array.
Now using  using  RTTI , find out where is  “Test”,  and call “daywise_summary()”  along with “play()” function.
*/

#include<iostream>
using namespace std;
class Cricket
{
    public:
    virtual void play()=0;
};
class Fiftyover:public Cricket
{
    public:
    void play()
    {
        cout<<"Fiftyover"<<endl;
    }
    
};
class Test:public Cricket
{
    public:
    void play()
    {
        cout<<"Test"<<endl;
    }
    void DaywiseSummary()
    {
        cout<<"Daywise Summary"<<endl;
    }
};
class TwentyOver:public Cricket
{
    public:
    void play()
    {
        cout<<"TwentyOver"<<endl;

    }
};
int main()
{
    Cricket *c[3];
    c[0]=new Fiftyover;
    c[1]=new Test;
    c[2]=new TwentyOver;
    for(int i=0;i<3;i++)
    {
        c[i]->play();
        Test *t = dynamic_cast<Test*>(c[i]);
        {
            if(t)
            {
                t->DaywiseSummary();

            }
        }
    }
}


