/*
Exception Handling in C++

Exception handling is used to handle runtime errors and prevent program crashes.
It uses:

1.try
2.throw
3.catch

*/

/*

1. try
        The try block contains code that may produce an error.

Example:

try
{
    // risky code
}
Where We Use It
Used around code like:
            division
            file handling
            array access
            user input
*/

/*

2. throw

        throw is used to generate an exception when an error occurs.

Example:

throw "Error!";

Where We Use It
Used when:
            dividing by zero
            invalid age
            negative marks
            invalid login

*/

/*

3. catch
        catch handles the exception thrown by throw.

Example:

catch(const char* msg)
{
    cout << msg;
}

*/

//Basic Example of Exception Handling in C++

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    try //try block to check if the user is eligible to vote
    {
        if(age<18)
        {
            throw "You are not eligible to vote."; //throwing an exception if the user is not eligible to vote
        }
        else
        {
            cout<<"You are eligible to vote.";
        }
    }
    catch(const char* msg) //catch block to handle the exception
    {
        cout<<"Exception: "<<msg;
    }
    return 0;
} 

//Output
/*
Enter your age: 16
Exception: You are not eligible to vote.
*/

//Aother Example of Exception Handling in C++
#include <iostream>
using namespace std;

int main()
{
    float num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    try
    {
        if(num2 == 0)
        {
            throw "Division by zero";
        }
        cout<< num1/num2;
    }
    catch(const char* msg)
    {
        cout<<"Exception: "<<msg;
    }
    return 0;
}
//Output 1:
/*
Enter two numbers: 10 0
Exception: Division by zero
*/
//Output 2:
/*
Enter two numbers: 10 2
5
*/
