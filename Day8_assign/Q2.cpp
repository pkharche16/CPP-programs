/*2)write a class template , which can take any generic type display it
 and return the size of type passed.
(hint : in this class template write two functions void disp() and int size() ).
*/
#include<iostream>
using namespace std;
template<class T>
class gen
{
    public:
    
    void disp(T a)
    {
        cout<<a<<endl;
    }
    int size(T a)
    {
        return sizeof(a);
    }


};
int main()
{
    gen<int>g;
    g.disp(10);
    cout<<g.size(10)<<endl;
    
}