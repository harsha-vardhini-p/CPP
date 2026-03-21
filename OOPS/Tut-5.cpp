
#include <iostream>
using namespace std;

//A shallow copy of an object copies all of the member values from one object to another.
//If the object contains pointers, the pointer values (memory addresses) are copied, but not the data they point to.
//This can lead to issues such as double deletion if both objects are destroyed, as they will both try to free the same memory.

class Student
{
    public:
        string name;
        int age;
        float *cgpaptr; // Pointer to a float for CGPA

    Student(string name, int age, float cgpa)
    {
        this->name = name;
        this->age = age;
        cgpaptr = new float;
        *cgpaptr = cgpa; // Store the CGPA value in the allocated memory
    }

    Student(const Student &s)
    {
        this->name = s.name;
        this->age = s.age;
        this->cgpaptr = s.cgpaptr; // Shallow copy of the pointer
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << *cgpaptr << endl; // Dereference the pointer to get the CGPA value
    }

};

int main()
{
    Student s1("Alice", 20, 8.5);
    Student s2(s1); // Shallow copy

    cout << "\nStudent 1:" << endl;
    s1.getInfo();
    *(s2.cgpaptr) = 9.2; // Modifying the CGPA through s2 will affect s1 due to shallow copy

    s2.name = "Bobby";
    cout<<"\n";

    s1.getInfo();

    cout<<"\nStudent 2:" << endl;
    s2.getInfo();

    /*
    Here we changed the cgpa of the student s2 but it also changed the cgpa of student s1 because both s1 and s2 are 
    sharing the same memory for cgpa due to shallow copy.
    */
    cout<<"\n";
return 0;
}


/*
 Feature       Shallow Copy              Deep Copy            
 Memory        Same memory shared        Separate memory      
 Pointer copy  Copies address            Copies actual value  
 Safety        Risky (dangling pointer)  Safe                 
 Default copy  Yes (compiler provides)   No (you must define) 
*/

//Output:
/*
Student 1:
Name: Alice
Age: 20
CGPA: 8.5

Student 1:
Name: Alice
Age: 20
CGPA: 9.2

Student 2:
Name: Bobby
Age: 20
CGPA: 9.2
*/




//Recorrection of above code with deep copy

//Deep copy not only copies the values of the member variavles but also make copies of any dynamically allocated memory that the member variables point to.

/// In a deep copy, a new memory is allocated for the pointer member, and the actual value is copied from the source object to the destination object.
#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;
        float *cgpaptr; // Pointer to a float for CGPA

    Student(string name, int age, float cgpa)
    {
        this->name = name;
        this->age = age;
        cgpaptr = new float;
        *cgpaptr = cgpa; // Store the CGPA value in the allocated memory
    }

    Student(const Student &s)
    {
        this->name = s.name;
        this->age = s.age;
        this->cgpaptr = new float; // Allocate new memory for CGPA
        *this->cgpaptr = *(s.cgpaptr); // Copy the CGPA value
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << *cgpaptr << endl; // Dereference the pointer to get the CGPA value
    }

};

int main()
{
    Student s1("Alice", 20, 8.5);
    Student s2(s1); // Deep copy

    cout << "\nStudent 1:" << endl;
    s1.getInfo();
    *(s2.cgpaptr) = 9.2; // Modifying the CGPA through s2 will NOT affect s1 due to deep copy

    s2.name = "Bobby";
    cout<<"\n";

    s1.getInfo();

    cout<<"\nStudent 2:" << endl;
    s2.getInfo();
    /*Here we changed the cgpa of the student s2 but it did not change the cgpa of student s1 because both s1 and s2 are 
    having their own separate memory for cgpa due to deep copy.
    */
    cout<<"\n";
return 0;
}
//Output:
/*
Student 1:
Name: Alice
Age: 20
CGPA: 8.5

Student 1:
Name: Alice
Age: 20
CGPA: 8.5   

Student 2:
Name: Bobby
Age: 20     
CGPA: 9.2
*/