#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
     *a=*a + *b;
     *b=*a - *b;
     *a=*a - *b;

}
int main()
{
    int num1,num2;
    cout<<"enter value of a and b:"<<endl;
    cin>>num1>>num2;
    
    swap(&num1,&num2);
    cout<<"after swapping a and b:"<<num1<<" "<<num2;
    return 0;
    
}