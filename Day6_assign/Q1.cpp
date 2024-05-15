/*class course
{
	//here
};
class DacCourse:public course
{
	// here
};

you should be able to say following

course *c=new course;
c->fees(); // course version should be called
c=new DacCourse;
c->fees();  // DacCourse version should be called
*/

#include<iostream>
using namespace std;
class course
{
    public:
    virtual void fees()
    {
        cout<<"course fees"<<endl;
    }

};
class DacCourse:public course
{
    public:
    void fees()
    {
        cout<<"Dac fees"<<endl;
    }

};
int main()
{
    course *c = new course;
    c->fees();
    c=new DacCourse;
    c->fees();
}