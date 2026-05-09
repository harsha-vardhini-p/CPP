/*
Template Specialization in C++

Template specialization means creating a special version of a template for a particular data type.
It is used when the normal template behavior is not suitable for a specific type.
*/

/*
General Template
template <typename T>
class Printer
{
public:
    void show()
    {
        cout << "General Template" << endl;
    }
};
This works for all data types.


Specialized Template
template <>
class Printer<char>
{
public:
    void show()
    {
        cout << "Specialized Template for char" << endl;
    }
};

This version works only for char.

*/


//Full Code

#include <iostream>
using namespace std;

// General template
template <typename T>
class Printer
{
public:
    void show()
    {
        cout << "General Template" << endl;
    }
};

// Template specialization for char
template <>
class Printer<char>
{
public:
    void show()
    {
        cout << "Specialized Template for char" << endl;
    }
};

int main()
{
    Printer<int> p1;
    p1.show();

    Printer<char> p2;
    p2.show();

    return 0;
}

//Output:
/*
General Template
Specialized Template for char
*/