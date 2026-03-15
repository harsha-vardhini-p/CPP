//Protected Access Specifier
/*
    Members declared as protected are accessible:
    inside the class itself and in derived(child) classes

    They cannot be accessed directly outside the class.
*/
/*
#include <iostream>
using namespace std;

class A
{
    protected:
        int x;
};

class B : public A // B is a derived class of A and publicly inherits from A
{
    public:
        void setValue()
        {
            cout << "Enter a value: ";
            cin >> x; // Accessing protected member of class A
            cout << "The value entered is: " << x << endl;
        }
};

int main()
{
    B obj;
    obj.setValue();
    return 0;
}

*/


#include <iostream>
using namespace std;

class Student
{
    protected:
        string name;
        int age;
};

class Details : public Student
{
    public:
        void getDetails()
        {
            cout << "Enter name: ";
            getline(cin, name); // Accessing protected member of class Student
            cout << "Enter age: ";
            cin >> age; // Accessing protected member of class Student
            cout<<endl;// Ignore the newline character left by cin
        }

        void displayDetails()
        {
            cout << "Name: " << name << endl; // Accessing protected member of class Student
            cout << "Age: " << age << endl; // Accessing protected member of class Student
        }
};

int main()
{
    Details studentDetails;
    studentDetails.getDetails();
    studentDetails.displayDetails();
    return 0;
}

//Output:
/*
Enter name: John Doe //using getline to read the full name including spaces
Enter age: 20
Name: John Doe
Age: 20
*/