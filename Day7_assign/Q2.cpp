/*2)	Create a base class Animal. 
Declare pure virtual function “void makeSound()” in it. 			
Define following sub classes for this class.                                                 		
A) Dog  b) Cat  c) Tiger	
“Tiger” class will have one more function “hunting()”.                                         	 
create a global function “void perform() which accepts pointer of type Animal so that it can invoke “makeSound()” function polymorphically.
 Inside this function find out where exactly where “Tiger” is stored using  RTTI (dynamic_cast) , and invoke “hunting()” function along with “makeSound()” function.

*/

#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void makesound()=0;
};
class Dog:public Animal
{
    void makesound()
    {
        cout<<"Dog is barking"<<endl;
    }
};
class Cat:public Animal
{
    public:
    void makesound()
    {
        cout<<"meow"<<endl;
    }
};
class Tiger:public Animal
{
    public:
    void makesound()
    {
        cout<<"roar"<<endl;
    }
    void hunting()
    {
        cout<<"hunting"<<endl;
    }
};
void perform(Animal *ptr)
{
    ptr->makesound();
    Tiger *t=dynamic_cast<Tiger*>(ptr);
    if(t)
    {
        t->hunting();
    }

}
int main()
{
    perform(new Tiger);
    perform(new Cat);
    perform(new Dog);

}


