/*
    Inheritance:

        Inheritance is a mechanism in C++ by which one class (derived class) acquires the properties 
        and behaviors (data members and member functions) of another class (base class), allowing code 
        reusability and hierarchical classification.
*/

 #include <iostream>
using namespace std;

class Student
{
    public:
        int age;
        string name;

    Student()
    {
        cout<<"\nParent class constructor"<<endl;
    }

};

class Person : public Student
{
    public:
        int rollNo;

    Person()
    {
        cout<<"\nChild class constructor"<<endl;
    }
    

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
    p.name = "John Doe";
    p.age = 20;
    p.rollNo = 101;

    p.getInfo();
return 0;
} 

// Output:  
/*
    Parent class constructor

    Child class constructor

    Name: John Doe
    Age: 20
    Roll No: 101
*/

//For parameterized constructor, we can use the following code:

#include <iostream>
using namespace std;

class Place
{
    public:
        string city;
        string country;

    Place(string city,string country)
    {
        this->city = city;
        this->country = country;
    }
};

class People: public Place
{
    public:
        int population;
    People(string city,string country,int population): Place(city,country)
    {
        this->population = population;
    }

    void display()
    {
        cout<<"\nCity: "<<city<<endl;
        cout<<"Country: "<<country<<endl;
        cout<<"Population: "<<population<<endl;
    }
};

int main()
{
    string city,country;
    int population;

    cout<<"Enter city name: ";
    cin>>city;
    cout<<"Enter country name: ";
    cin>>country;
    cout<<"Enter population: ";
    cin>>population;

    People p(city,country,population);

    p.display();

return 0;

}

