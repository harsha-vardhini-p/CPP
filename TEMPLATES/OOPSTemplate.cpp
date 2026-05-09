//Inheritance with Templates

/*
#include <iostream>
using namespace std;

//Base Class
class Person
{
    protected:
        string name;
    public:
        void setName(string n)
        {
            name = n;
        }
};

//Derived Class template
template <typename T>
class Student: public Person
{
    private:
        T marks;
    public:
        void setMarks(T m)
        {
            marks = m;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
    Student<int> student1;
    student1.setName("Harsha Vardhini");
    student1.setMarks(85);
    student1.display();

    Student<float> student2;
    student2.setName("Rohit Sharma");
    student2.setMarks(92.5);
    student2.display();

    return 0;
}*/

//Output:
/*
Name: Harsha Vardhini
Marks: 85
Name: Rohit Sharma
Marks: 92.5
*/

//Polymorphism with Templates
#include <iostream>
#include <string>
using namespace std;


class Sounds
{
    public:
        virtual void sound()
        {
            cout << "Dog makes sound boww.. bowh.." << endl;
        }
};

template <typename T>
class Cat : public Sounds
{
    private:
        T name;
    public:
        void setName(T n)
        {
            name = n;
        }

        void sound() override
        {
            cout<<"Cat name: "<<name<<endl;
            cout << "Cat makes sound meow.. meow.." << endl;
        }
};

int main()
{
    Sounds* s1;
    Cat<string> c1;
    s1 = &c1;
    c1.setName("Kitty");
    s1->sound();

    return 0;

}

//Output:
/*
Cat name: Kitty
Cat makes sound meow.. meow..
*/

//Encapsulation with Templates
#include <iostream>
using namespace std;

template <typename T>
class Student
{
private:
    T marks;

public:
    // Setter function
    void setMarks(T m)
    {
        marks = m;
    }

    // Getter function
    T getMarks()
    {
        return marks;
    }
};

int main()
{
    Student<int> s1;

    s1.setMarks(95);

    cout << "Marks = "
         << s1.getMarks() << endl;

    return 0;
}
//Output:
/*
Marks = 95
*/

//Constructor and Destructor with Templates
#include <iostream>
using namespace std;

template <typename T>
class Box
{
    private:
        T value;
    public:
        Box(T v)
        {
            value = v;
            cout << "Constructor called. Value set to: " << value << endl;
        }
    
        ~Box()
        {
            cout << "Destructor called. Value was: " << value << endl;
        }
};

int main()
{
    Box<int> b1(100);
    Box<string> b2("Hello");

    return 0;
}
//Output:
/*
Constructor called. Value set to: 100
Constructor called. Value set to: Hello
Destructor called. Value was: Hello
Destructor called. Value was: 100
*/
