/*
    Virtual Base Class

    A virtual base class is a base class that is inherited using the virtual keyword 
    to ensure that only one copy of the base class is shared among all derived classes, 
    avoiding ambiguity in multiple inheritance.

*/

#include <iostream>
using namespace std;

class A {
public:
    void showA()
    {
        cout << "Base class A" << endl;
    }
};

class B : virtual public A {
    void showB()
    {
        cout << "Derived class B" << endl;
    }
};

class C : virtual public A {
    void showC()
    {
        cout << "Derived class C" << endl;
    }
};

class D : public B, public C {
    void showD()
    {
        cout << "Derived class D" << endl;
    }
};

int main() {
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}

//Output:
//Base class A
//Derived class B
//Derived class C
//Derived class D
