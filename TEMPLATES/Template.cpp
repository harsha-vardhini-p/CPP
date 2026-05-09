/*
In C++, a template is a feature that allows programmers to write generic code that can work with multiple data types.

Templates are mainly used to create:

Generic functions
Generic classes

->Instead of writing separate code for different data types, templates allow a single function or 
class to work with many data types such as int, float, double, and char.

->Templates support generic programming in which generic types are used as parameters so that the 
same code can work with different data types.
*/


/*
TYPES OF TEMPLATES
1. Function Templates: A function template defines a blueprint for creating functions that can operate with any data type. 
   The syntax for defining a function template is as follows:

   template <typename T> 
   T functionName(T arg) {
       // function body
   }

2. Class Templates: A class template defines a blueprint for creating classes that can operate with any data type.
    The syntax for defining a class template is as follows:
    
    template <typename T> 
    class ClassName {
         // class body
    }
*/

//Example of a function template
/* #include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum of integers: " << add(x, y) << endl;
    double a, b;
    cout << "Enter two doubles: ";
    cin >> a >> b;
    cout << "Sum of doubles: " << add(a, b) << endl;
    return 0;

} */
//Output:
/*
Enter two integers: 5 10
Sum of integers: 15
Enter two doubles: 3.5 4.5
Sum of doubles: 8
*/

//Example of a class template
#include <iostream>
using namespace std;

template <typename T>
class Student
{
    public:
        T name;

    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student<string> student1;
    cout << "Enter student name: ";
    getline(cin, student1.name);
    student1.display();

    return 0;
}
//Output:
/*
Enter student name: John Doe
Student Name: John Doe
*/



