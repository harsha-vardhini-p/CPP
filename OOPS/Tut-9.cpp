//Passing object as a parameter to a function


#include <iostream>
using namespace std;

class Compare
{
    public:
        int num1,num2;

        void getData()
        {
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
        }
};

void compare(Compare c)
{
    if(c.num1>c.num2)
        cout<<c.num1<<" is greater than "<<c.num2<<endl;
    else if(c.num1<c.num2)
        cout<<c.num2<<" is greater than "<<c.num1<<endl;
    else
        cout<<"Both numbers are equal"<<endl;
}

int main()
{
    Compare c;
    c.getData();
    compare(c);
    return 0;
}