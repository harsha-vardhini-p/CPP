//Finding maximum of two numbers using function template
#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Maximum of integers: " << findMax(x, y) << endl;
    double a, b;
    cout << "Enter two doubles: ";
    cin >> a >> b;
    cout << "Maximum of doubles: " << findMax(a, b) << endl;
    return 0;
} 
//Output:
/*
Enter two integers: 5 10
Maximum of integers: 10
Enter two doubles: 3.5 4.5
Maximum of doubles: 4.5
*/

//Function template to swap two values using pass by value

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T a, T b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Inside swap function: a = "<<a<<" b = "<<b<<endl;
}

int main()
{
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    swapValues(x, y);
    cout<<"Outside swap function: x = "<<x<<" y = "<<y<<endl;

    double l, m;
    cout << "Enter two doubles: ";
    cin >> l >> m;

    swapValues(l, m);
    cout<<"Outside swap function: l = "<<l<<" m = "<<m<<endl;

    return 0;
}
//Output:
/*
Enter two integers: 5 10
Inside swap function: a = 10 b = 5
Outside swap function: x = 5 y = 10
Enter two doubles: 3.5 4.5
Inside swap function: a = 4.5 b = 3.5
Outside swap function: l = 3.5 m = 4.5
*/

//Function template to swap two values using pass by pointer
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T *a , T *b) //(T &a, T &b) for pass by reference
{
    T temp = *a;
    *a = *b; 
    *b = temp;
    cout<<"Inside swap function: a = "<<*a<<" b = "<<*b<<endl; 
}

int main()
{
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    swapValues(&x, &y); //swapValues(a, b) for pass by reference
    cout<<"Outside swap function: x = "<<x<<" y = "<<y<<endl;

    double l, m;  
    cout << "Enter two doubles: ";
    cin >> l >> m;

    swapValues(&l, &m);//swapValues(l, m) for pass by reference
    cout<<"Outside swap function: l = "<<l<<" m = "<<m<<endl;

    return 0;
} 
//Output:
/*
Enter two integers: 5 10
Inside swap function: a = 10 b = 5
Outside swap function: x = 10 y = 5
Enter two doubles: 3.5 4.5
Inside swap function: a = 4.5 b = 3.5
Outside swap function: l = 4.5 m = 3.5
*/

//Calculator using function template
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a+b;
}
template <typename T>
T subtract(T a, T b)
{
    return a-b;
}
template <typename T>
T multiply(T a, T b)
{
    return a*b;
}
template <typename T>
T divide(T a, T b)
{
    if(b != 0)
        return a/b;
    else
    {
        cout<<"Error: Division by zero!"<<endl;
        return 0; // Return a default value or handle as needed
    }
}

int main()
{
    int x,y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout<<"Sum of integers: "<<add(x, y)<<endl;
    cout<<"Difference of integers: "<<subtract(x, y)<<endl;
    cout<<"Product of integers: "<<multiply(x, y)<<endl;
    cout<<"Quotient of integers: "<<divide(x, y)<<endl;

    double a, b;
    cout << "Enter two doubles: ";
    cin >> a >> b;

    cout<<"Sum of doubles: "<<add(a, b)<<endl;
    cout<<"Difference of doubles: "<<subtract(a, b)<<endl;
    cout<<"Product of doubles: "<<multiply(a, b)<<endl;
    cout<<"Quotient of doubles: "<<divide(a, b)<<endl;

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

//Array sum using function template
#include <iostream>
using namespace std;

template <typename T>
T arraySum(T arr[],int size)
{
    T sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    int size;
    cout << "Enter size of integer array: ";
    cin>>size;
    int arr[size];
    cout << "Enter "<<size<<" integers: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    cout<<"Sum of integer array: "<<arraySum(arr, size)<<endl;
    return 0;
}
//Output:
/*
Enter size of integer array: 5
Enter 5 integers: 1 2 3 4 5
Sum of integer array: 15
*/