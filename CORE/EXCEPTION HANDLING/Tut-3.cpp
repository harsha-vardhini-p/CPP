//Exception Handling in C++ using try, throw and catch in class
//Bank Account – Insufficient Balance Exception

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        try
        {
            if(amount > balance)
            {
                throw "Insufficient Balance!";
            }

            balance -= amount;

            cout << "Remaining Balance: "
                 << balance << endl;
        }

        catch(const char* msg)
        {
            cout << msg << endl;
        }
    }
};

int main()
{
    BankAccount b1(5000);

    b1.withdraw(6000);

    return 0;
}
//Output
/*
Insufficient Balance!
*/


//2. Student Class – Invalid Marks Exception
#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        try
        {
            if(m < 0 || m > 100)
            {
                throw "Invalid Marks!";
            }

            marks = m;

            cout << "Marks Stored Successfully"
                 << endl;
        }

        catch(const char* msg)
        {
            cout << msg << endl;
        }
    }
};

int main()
{
    Student s1;

    s1.setMarks(120);

    return 0;
}
//Output
/*
Invalid Marks!
*/


//3. Voting System – Custom Exception
#include <iostream>
using namespace std;

// Custom exception class
class InvalidAge
{
};

class Voting
{
private:
    int age;

public:
    Voting(int a)
    {
        age = a;
    }

    void checkEligibility()
    {
        try
        {
            if(age < 18)
            {
                throw InvalidAge();
            }

            cout << "Eligible to Vote"
                 << endl;
        }

        catch(InvalidAge)
        {
            cout << "Age must be 18 or above!"
                 << endl;
        }
    }
};

int main()
{
    Voting v1(16);

    v1.checkEligibility();

    return 0;
}
//Output
/*
Age must be 18 or above!
*/



//4. Division Class – Divide by Zero
#include <iostream>
using namespace std;

class Calculator
{
public:
    void divide(int a, int b)
    {
        try
        {
            if(b == 0)
            {
                throw "Cannot divide by zero!";
            }

            cout << "Result = "
                 << a / b << endl;
        }

        catch(const char* msg)
        {
            cout << msg << endl;
        }
    }
};

int main()
{
    Calculator c1;

    c1.divide(10, 0);

    return 0;
}
//Output
/*
Cannot divide by zero!
*/
