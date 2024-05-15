/*1)
class base
{
	public:
		base(char *ptr)
		{
		}
};
class sub:public base
{
};
Following statements should be possible
sub s;
sub *s1=new sub(40);
sub *s2=new sub('a',4.5);
*/

#include<iostream>
#include<string>
using namespace std;
class base
{
    public:
    base(char *ptr)
    {

    }
};
class sub:public base
{
    public:
    sub():base()
    {

    }
};
int main()
{
    sub s;
    sub *s1 = new sub(40);
    sub*s2 = new sub('a',4.5);
}