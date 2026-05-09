//Student Class Template
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Student
{
    private: 
        T1 name;
        T2 roll_number;
    public:
        void setDetails(T1 n,T2 r)
        {
            name = n;
            roll_number = r;
        }

        void display()
        {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
        }
};

int main()
{
    Student<string,int>student1;

    student1.setDetails("Harsha Vardhini",123);

    student1.display();
        
    return 0;
}

//Output:
/*
Student Name: Harsha Vardhini
Roll Number: 123
*/


//Calculator class template with functions add(), subtract(), multiply(), divide() use both int and float data types

#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
    public:
    T add(T a, T b)
    {
        return a+b;
    }
    T subtract(T a, T b)
    {
        return a-b;
    }
    T multiply(T a, T b)
    {
        return a*b;
    }
    T divide(T a, T b)
    {
        if(b != 0)
            return a/b;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return a default value or handle as needed
        }
    }
};

int main()
{
    Calculator<int> intCalc;
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum of integers: " << intCalc.add(x, y) << endl;
    cout << "Difference of integers: " << intCalc.subtract(x, y) << endl;
    cout << "Product of integers: " << intCalc.multiply(x, y) << endl;
    cout<< "Quotient of integers: " << intCalc.divide(x, y) << endl;

    Calculator<double> doubleCalc;
    double a, b;
    cout << "\nEnter two doubles: ";
    cin >> a >> b;
    cout << "Sum of doubles: " << doubleCalc.add(a, b) << endl;
    cout << "Difference of doubles: " << doubleCalc.subtract(a, b) << endl;
    cout << "Product of doubles: " << doubleCalc.multiply(a, b) << endl;
    cout << "Quotient of doubles: " << doubleCalc.divide(a, b) << endl;

    return 0;
}

//Output:
/*
Enter two integers: 5 10
Sum of integers: 15
Difference of integers: -5
Product of integers: 50
Quotient of integers: 0.5

Enter two doubles: 3.5 4.5
Sum of doubles: 8
Difference of doubles: -1
Product of doubles: 15.75
Quotient of doubles: 0.777778
*/

//Box class template to store a value
#include <iostream>
using namespace std;

// Class template
template <typename T>
class Box
{
private:
    T value;

public:
    void setValue(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Box<int> b1;
    b1.setValue(100);
    b1.display();

    Box<string> b2;
    b2.setValue("Hello");
    b2.display();

    return 0;
}
//Output:
/*
Value = 100
Value = Hello
*/

//Pair Class Template
#include <iostream>
using namespace std;

template <typename T1,typename T2>
class Pair
{
    private:
        T1 first;
        T2 second;
    public:
        void setPair(T1 f,T2 s)
        {
            first = f;
            second = s;
        }
        void display()
        {
            cout << "First: " << first << endl;
            cout << "Second: " << second << endl;
        }
};

int main()
{
    Pair<string,int>p1;
    p1.setPair("Age", 25);
    p1.display();

    Pair<double,string>p2;
    p2.setPair(3.14, "Pi");
    p2.display();

    return 0;
}

//Output:
/*
First: Age
Second: 25
First: 3.14
Second: Pi
*/

//Stack class template using array
#include <iostream>
#include <string>
#define MAX 100
using namespace std;

template <typename T>
class Stack
{
    private:
        T arr[MAX];
        int top;
    public:
        Stack()
        {
            top = -1;
        }
        void push(T value)
        {
            if(top == MAX-1)
            {
                cout << "Stack overflow!" << endl;
            }
            else
            {
                arr[++top] = value;
            }
        }
        void pop()
        {
            if(top == -1)
            {
                cout << "Stack underflow!" << endl;
            }
            else
            {
                top--;
            }
        }
        void display()
        {
            cout << "Stack elements: ";
            for(int i=top; i>=0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    intStack.pop();
    intStack.display();

    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display();
    stringStack.pop();
    stringStack.display();

    return 0;
}
//Output:
/*
Stack elements: 30 20 10
Stack elements: 20 10
Stack elements: World Hello
Stack elements: Hello
*/
