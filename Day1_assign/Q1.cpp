//store value 20 inside "num" variable.
//create a pointer to this variable. print the value of "num" using pointer.
//increment the pointer by 2 and show with the diagram what happens.



#include<iostream>
using namespace std;
int main()
{
    int num =20,*ptr;
    ptr=&num;
    cout<<"The value of num is "<<num<<endl;
    cout<<"The value of num is "<<*ptr<<endl;

    *ptr+=2;
    
    cout<<"The value of num is "<<*ptr<<endl;
}
