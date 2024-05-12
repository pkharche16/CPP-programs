#include<iostream>
using namespace std;

int main()
{
	int num1=-5,num2=-8;
	void change(int,int*);
	cout<<"before\n"<<num1<<num2;
	change(num1,&num2);
	cout<<"after \n"<<num1<<num2;
}
void change(int x,int *y)
{
	x*=-1;
	*y*=-1;
}
