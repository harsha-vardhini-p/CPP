#include <iostream>  
using namespace std;  

int main() {  
    cout << "Hello everyone, Welcome to C++ programming!" << endl;  
    return 0;  
}

/* 1. #include <iostream>

Meaning: This is a preprocessor directive.

It tells the compiler to include the input-output stream header file (iostream) before compiling the program.

iostream allows us to use standard input/output objects like cout (for output) and cin (for input).



2. using namespace std;

Meaning: This line tells the compiler to use the standard namespace.

In C++, standard library functions and objects (like cout, cin, etc.) are defined inside a namespace called std.

Without this line, you would have to write std::cout instead of just cout.


Example:

std::cout << "Hello, World!";

and

using namespace std;
cout << "Hello, World!";

both do the same thing.


3. int main() {

Meaning: This defines the main function, which is the starting point of every C++ program.

The execution of the program always begins with main().

int means that this function will return an integer value (usually to indicate success or failure).


4️.cout << "Hello, World!";

Meaning:

cout means console output (part of the C++ standard library).

The operator << is called the insertion operator — it sends data to the output stream (in this case, the screen).

"Hello, World!" is a string literal that will be displayed.

So this line prints Hello, World! on the screen.



5. return 0;

Meaning: This statement ends the main() function and returns 0 to the operating system.

Returning 0 usually means the program ran successfully.



6️. }

Meaning: This closes the body of the main() function.

Every opening { must have a corresponding closing } in C++. */