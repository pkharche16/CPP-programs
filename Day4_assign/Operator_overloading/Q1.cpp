// 1) class Number
//    {
//        int num;
//    }
// In the main function,
// Number n1(8),n2(4),n3(20),n4(6),n5;
// n5=n1-n2
// n5=n3/n4;
// n5=n1*n3

#include<iostream>
using namespace std;
class Number
{
    int num;
    public:
    Number()
    {

    }
    Number(int n)
    {
        this->num=n;
    }
    int getNum()
    {
        return num;
    }
    Number operator-(Number &ref)
    {
        return Number (num-ref.getNum());
    }
    Number operator/(Number &ref)
    {
        return Number (num/ref.getNum());
    }
    Number operator*(Number &ref)
    {
        return Number (num*ref.getNum());
    }

};
int main()
{
    Number n1(8),n2(4),n3(20),n4(6),n5;
    n5=n1-n2;
    cout<<"substraction is:"<<n5.getNum()<<endl;
    n5=n3/n4;
    cout<<"division is:"<<n5.getNum()<<endl;
    n5=n1*n3;
    cout<<"Multiplication is:"<<n5.getNum()<<endl;
    

    return 0;

}