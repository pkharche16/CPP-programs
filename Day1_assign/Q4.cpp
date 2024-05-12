#include<iostream>
using namespace std;

int main()
{
	int num1=5,num2=8;
	void swap(int*,int*);
	printf("Before %d\t%d\n",num1,num2);
	swap(&num1,&num2);
	printf("After %d\t%d\n",num1,num2);
}
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
