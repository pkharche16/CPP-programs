#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"enter num1 and num2:\n";
    cin>>num1>>num2;
    int *ptr1=&num1;
   int *ptr2 = &num2;
    cout<<"Addition is: "<<*ptr1+*ptr2<<endl;
    cout<< "substraction is: "<<*ptr1 - *ptr2<<endl;
     cout<< "multiplication is: "<<*ptr1 * *ptr2<<endl;
      cout<< "Division is: "<<*ptr2 / *ptr1<<endl;
      return 0;
    
}