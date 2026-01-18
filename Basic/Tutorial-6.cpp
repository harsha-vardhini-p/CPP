//Type Casting in C++
#include <iostream>
using namespace std;

int main() 
{
    int intVar = 42;
    double doubleVar = 3.14;

    // Implicit Casting
    double implicitCast = intVar; // int to double
    cout << "Implicitly Casted Value (int to double): " << implicitCast << endl;

    // Explicit Casting
    int explicitCast = static_cast<int>(doubleVar); // double to int
    cout << "Explicitly Casted Value (double to int): " << explicitCast << endl;

    return 0;
}

//or

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 9.88;

    cout << "The value of a is: "<< a << endl;
    cout << "The value of b is: "<< int(b) << endl;//Output:9
    cout << "The value of b is: "<< (int)b << endl;//Output:9 is valid but not recommended in C++14 and later versions
    cout << "The value of a + b is: "<< a + int(b) << endl;//Output:19
    cout << "The value of a + b is: "<< a + static_cast<int>(b) << endl;//Output:19
    return 0;
}
*/


//Literals in C++
/*
Literals are fixed values that are directly written into the code.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';
    string s = "C++";
    bool flag = true;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << s << endl;
    cout << flag << endl;

    return 0;
}
*/

/*
Output:
10
3.14
A
C++
1

*/

/* Literals are constant values

Used directly in programs

Improve readability and simplicity */