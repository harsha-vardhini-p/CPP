/*
Multiple Catch Blocks:  Used to handle different types of exceptions separately.
*/

//Multiple Catch Blocks Example in C++
#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cin >> choice;

        if(choice == 1)
            throw 100;

        else if(choice == 2)
            throw 5.5;

        else
            throw "Invalid choice";
    }

    catch(int x)
    {
        cout << "Integer Exception: " << x << endl;
    }

    catch(double y)
    {
        cout << "Double Exception: " << y << endl;
    }

    catch(const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}

/*
Custom Exception Classes:  You can create your own exception classes by 
inheriting from the standard exception class.
*/


