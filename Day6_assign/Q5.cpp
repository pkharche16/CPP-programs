/*5) create an abstract class Shape with
	virtual void display()
	{
		cout<<"display on the canvas"<<endl;
	}
	and
	pure virtual function (contract) void draw() 
functions.

now derive 3 classes from Shape
	Circle,Triangle and Rectangle
in the main function create array of pointer to Shape class and store all the child class objects addresses inside it.
 Traverse the array and invoke "display()" and "draw()" functions.
*/

#include<iostream>
using namespace std;
class shape
{
    public: 
     void display()
    {
        cout<<"display on the canvas"<<endl;
    }
    virtual void draw()=0;
};
class circle:public shape
{
    public:
    void draw()
    {
        cout<<"circle"<<endl;

    }
};
class triangle:public shape
{
    public:
    void draw()
    {
        cout<<"triangle"<<endl;
    }
};
class rectangle:public shape
{
    public:
    void draw()
    {
        cout<<"rectangle"<<endl;
    }
};
int main()
{
    shape *s[3];
    s[0]=new circle;
    s[1]=new triangle;
    s[2]=new rectangle;
    for(int i=0;i<3;i++)
    {
        s[i]->display();
        s[i]->draw();

    }
    
}

