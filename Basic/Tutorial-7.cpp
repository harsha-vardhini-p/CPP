//Swapping of two numbers using third variable
#include <iostream>
#include <algorithm> //Required for std::swap
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    //Swapping
    c = a;
    a = b;
    b = c;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    //Without using third variable
    cout << "Swapping without third variable:" << endl;
    a = a + b; //a now becomes sum of a and b
    b = a - b; //b becomes original a
    a = a - b; //a becomes original b
    cout << "After swapping without third variable: a = " << a << ", b = " << b << endl;

    //Using XOR operator
    cout << "Swapping using XOR operator:" << endl;
    a = a ^ b; //Step 1
    b = a ^ b; //Step 2
    a = a ^ b; //Step 3
    cout << "After swapping using XOR operator: a = " << a << ", b = " << b << endl;

    // Using std::swap function
    cout << "Swapping using std::swap function:" << endl;
    std::swap(a, b);
    cout << "After swapping using std::swap function: a = " << a << ", b = " << b << endl;

    //Using multiplication and division
    cout << "Swapping using multiplication and division:" << endl;
    a = a * b; //Step 1
    b = a / b; //Step 2
    a = a / b; //Step 3
    cout << "After swapping using multiplication and division: a = " << a << ", b = " << b << endl;

    return 0;
}

/*
Output:
Enter two numbers: 5 10
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5
Swapping without third variable:
After swapping without third variable: a = 5, b = 10
Swapping using XOR operator:
After swapping using XOR operator: a = 10, b = 5
Swapping using std::swap function:
After swapping using std::swap function: a = 5, b = 10
Swapping using multiplication and division:
After swapping using multiplication and division: a = 10, b = 5

*/

//Calulating the area of different shapes
/*
Triangle, Rectangle, Circle
#include <iostream>
#include <cmath> //Required for M_PI
using namespace std;

int main()
{
    //Triangle
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    double area_triangle = 0.5 * base * height;
    cout << "Area of Triangle: " << area_triangle << endl;

    //Rectangle
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    double area_rectangle = length * width;
    cout << "Area of Rectangle: " << area_rectangle << endl;

    //Circle
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    double area_circle = M_PI * radius * radius;
    cout << "Area of Circle: " << area_circle << endl;

    return 0;
}
*/
/* Output:
Enter base and height of the triangle: 5 10
Area of Triangle: 25
Enter length and width of the rectangle: 4 6
Area of Rectangle: 24
Enter radius of the circle: 3
Area of Circle: 28.2743
*/

//M_PI is a constant in cmath representing the value of π (pi) approximately equal to 3.14159.