// 2) class sample
//    {
// 	private:
// 		char ch;
// 	public:
// 		sample(char ch)
// 		{
// 			this->ch=ch;
// 		}
//   };
//   given above class.

// write a global function "display" which will access "ch" directly and display it.
// call this function from main function.

#include<iostream>
using namespace std;
class sample
{
    private:
     char ch;
    public:
    sample(char ch)
    {
        this->ch=ch;

    }
    friend void disp(sample&);
};
void disp(sample &ref)
{
    cout<<ref.ch;
}
int main()
{
    sample s('R');
    disp(s);
    return 0;
}