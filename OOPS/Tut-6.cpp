/*
    Destructor:
    - A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted.
    - It is used to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.
    - The destructor has the same name as the class, but is preceded by a tilde (~) and does not take any parameters nor does it return any value.
    - The destructor is called automatically when an object is destroyed, and it is responsible for cleaning up any resources that the object may have acquired during its lifetime.    
*/

/*
    Key Points:

    Same name as the class, but with a ~ (tilde) in front
    No return type (not even void)
    No parameters
    Only one destructor per class (no overloading)
*/


#include <iostream>
using namespace std;

class Place
    {
        public:
            string name;
            string country;
            int *population; //Only destroyed when the destructor is called.

        Place(string name, string country)
        {
            this->name = name;
            this->country = country;
            this->population = new int; // Dynamically allocate memory for population
            *population = 1000000; // Assign a default population value

            cout<<"\nConstructor called"<<endl;
        }
        ~Place()
        {
            cout<<"\nDestructor called for "<<name<<"\n"<<endl;
            delete population; // Free the dynamically allocated memory
        }

        void getInfo()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Country: "<<country<<endl;
        }
    };

int main()
{
    Place p1("Eiffel Tower", "France");
    Place p2("Statue of Liberty", "USA");

    cout<<"\nPlace 1:"<<endl;
    p1.getInfo(); //Second destroyed

    cout<<"\nPlace 2:"<<endl;
    p2.getInfo(); //First destroyed

    /*
     1. Local Objects (Inside a Function / Block)
        Destroyed in reverse order of creation (LIFO - Last In, First Out)*/
return 0;
}

#include <iostream>
using namespace std;

class A {
public:
    ~A() { cout << "A destroyed\n"; }
};

class B {
public:
    ~B() { cout << "B destroyed\n"; }
};

class C {
    A a;
    B b;
public:
    ~C() { cout << "C destroyed\n"; }
};

int main() {
    C obj;
}

//Output:
/*
C destroyed
B destroyed
A destroyed
*/


