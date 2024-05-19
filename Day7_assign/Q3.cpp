/*3)	Create a base class Cricket. Declare pure virtual function “void play()” in it. 			
Define following sub classes for this class.                                                 		
A) FiftyOver  b) Test  c) TwentyOver	
“Test” class will have one more function “daywise_summary()”.                                         	                                         	
create a global function “void doit() which accepts reference
 of type Cricket so that it can invoke “play()” function polymorphically. 
Inside this function find out where exactly where “Test” is stored using  
RTTI (dynamic_cast) , and invoke “daywise_summary()” function along
 with “play()” function.
 [ handle bad_cast exception ]
*/

#include<iostream>
using namespace std;
class cricket
{
    public:
    virtual void play()=0;
};
class fiftyover:public cricket
{
    public:
    void play()
    {
        cout<<"fifty over"<<endl;
    }
};
class test:public cricket
{
    public:
    void play()
    {
        cout<<"test"<<endl;
    }
    void Daywisesummary()
    {
        cout<<"daywise summary"<<endl;
    }
};
class twentyover:public cricket
{
    public:
    void play()
    {
        cout<<"twenty over"<<endl;
    }
};

void doit(cricket &c)
{
    c.play();
    try
 { 
    test &e = dynamic_cast<test&>(c);
   if(&e)
   {
    e.Daywisesummary();
   }
 }
   catch(bad_cast &r)
   {
    cout<<"bad cast"<<r.what()<<endl;
   }   
}
int main()
{
    test t;
    doit(t);
}
