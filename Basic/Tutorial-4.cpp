//Static Variables in C++
/* static means the value is preserved and memory is allocated only once.

 1. Static variable inside a function

Value is remembered between function calls */
/* #include <iostream>
using namespace std;

void countNumber()
{
    static int count = 0; //Static variable
    count++;
    cout<<"Function called "<<count<<"times"<<endl;
}

int main()
{
    countNumber();
    countNumber();
    countNumber();
    return 0;
} */

//after every function call ,the value of count is preserved i.e.,incremented value is retained

/* Output:
Function called 1 times
Function called 2 times
Function called 3 times
*/

/* 2. Static global variable

Scope limited to the file only

#include <iostream>
using namespace std;

static int x = 10;

int main() {
    cout << x << endl;
    return 0;
}
 */

/* Output:
10
*/


/* Auto variable in C++

auto lets the compiler automatically detect the data type */

#include <iostream>
using namespace std;

int main() {
    auto x = 10;        // int
    auto y = 3.14;     // double
    auto z = 'A';      // char

    cout << x << " " << y << " " << z << endl;
    cout<<sizeof(x)<<" "<<sizeof(y)<<" "<<sizeof(z)<<endl; 
    return 0;
} 
/* Output:
10 3.14 A
4 8 1 (size of int, double and char respectively)
*/


//Const Variables in C++
/* A const variable is a variable whose value cannot be changed after initialization.
#include <iostream>
using namespace std;
int main() {
    const int x = 50;
    //x = 100; // Error: cannot modify a const variable
    cout << "Const Variable: " << x << endl;
    return 0;
} */
/* Output:
Const Variable: 50
*/
