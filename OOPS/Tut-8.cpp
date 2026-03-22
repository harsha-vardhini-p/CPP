//Types of Inheritance in C++

/*
    Types of Inheritance in C++:
    1. Single Inheritance: A derived class inherits from a single base class.
    2. Multiple Inheritance: A derived class inherits from more than one base class.
    3. Multilevel Inheritance: A derived class inherits from a base class, and
         another class inherits from the derived class.
    4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
    5. Hybrid Inheritance: A combination of two or more types of inheritance.
*/  


// Example of Single Inheritance
#include <iostream>
using namespace std;

class Student
{
    public:
        int age;
        string name;
};

class Person : public Student
{
    public:
        int rollNo;

    void getInfo()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
};

int main()
{
    Person p;
    p.name = "Phil Smith";
    p.age = 18;
    p.rollNo = 783;

    p.getInfo();
return 0;
}
// Output:
/*
    Name: Phil Smith
    Age: 18
    Roll No: 783
*/

//2.Multiple Inheritance

#include <iostream>
using namespace std;

class A
{
    public:
        void displayA()
        {
            cout<<"Hello from A"<<endl;
        }
};

class B
{
    public:
        void displayB()
        {
            cout<<"Hello from B"<<endl;
        }
};

class C: public A, public B
{
    public:
        void displayC()
        {
            cout<<"Hello from C"<<endl;
        }
};

int main()
{
    C obj;

    obj.displayA();
    obj.displayB();
    obj.displayC();

return 0;

}
// Output:
/*
    Hello from A
    Hello from B       
    Hello from C
*/


//3.Multilevel Inheritance - Ingheritance happens in a chain
#include <iostream>
using namespace std;

class A
{
    public:
        void showA()
        {
            cout<<"A"<<endl;
        }
};

class B: public A
{
    public:
        void showB()
        {
            cout<<"B"<<endl;
        }
};

class C : public B
{
    public:
        void showC()
        {
            cout<<"C"<<endl;
        }
};

int main()
{
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
return 0;
}
// Output:
/*
    A
    B
    C
*/

//4.Hierarchical Inheritance - Multiple derived classes inherit from a single base class
#include <iostream>
using namespace std;

class A
{
    public:
        void showA()
        {
            cout<<"A"<<endl;
        }
};

class B : public A
{
    public:
        void showB()
        {
            cout<<"B"<<endl;
        }
};

class C : public A
{
    public:
        void showC()
        {
            cout<<"C"<<endl;
        }
};

int main()
{
    B objB;
    C objC;

    objB.showA();
    objB.showB();

    objC.showA();
    objC.showC();   

return 0;
}
// Output:
/*
    A
    B
    A
    C
*/

//5.Hybrid Inheritance - A combination of two or more types of inheritance

/*


Why it’s not used much?
Hybrid inheritance (combination of multiple types) can make code:

Complex
Hard to understand and maintain
Prone to ambiguity problems (like the diamond problem)

 
When it is used?

Hybrid inheritance is used only when:

The problem is complex and truly needs multiple relationships
In large systems/frameworks
When using advanced OOP designs


*/