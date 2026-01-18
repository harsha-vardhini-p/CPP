//Setting Precision in C++
#include <iostream>
#include <iomanip> //Required for setprecision
using namespace std;

int main() 
{
    int a = 4, b = 76, c = 1234, d = 56789;    
    cout << "Without setw(): " << a <<endl;
    cout << "Without setw(): " << b <<endl;
    cout << "Without setw(): " << c <<endl;
    cout << "Without setw(): " << d <<endl;
    

    cout << "With setw(): " << setw(5) << a <<endl;
    cout << "With setw(): " << setw(5) << b <<endl;
    cout << "With setw(): " << setw(5) << c <<endl;
    cout << "With setw(): " << setw(5) << d <<endl;

    return 0;
}

/* Output:
Without setw(): 4
Without setw(): 76
Without setw(): 1234
Without setw(): 56789
With setw():     4
With setw():    76
With setw():  1234
With setw(): 56789
*/  


/*
2. Setting precision for floating-point numbers

#include <iostream>
#include <iomanip> //Required for setprecision
using namespace std;

int main()
{
    double num1 = 3.14159265359;
    double num2 = 2.71828182846;

    cout << "Default precision: " << num1 << ", " << num2 << endl;

    cout << "Precision set to 3: " << setprecision(3) << num1 << ", " << num2 << endl;

    cout << "Precision set to 5: " << setprecision(5) << num1 << ", " << num2 << endl;

    cout << "Precision set to 10: " << setprecision(10) << num1 << ", " << num2 << endl;

    return 0;
}
*/
/* Output:
Default precision: 3.14159, 2.71828

Precision set to 3: 3.14, 2.72
Precision set to 5: 3.1416, 2.7183
Precision set to 10: 3.141592654, 2.718281828
*/

/*
3.Sum of two floating-point numbers with precision
#include <iostream>
#include <iomanip> //Required for setprecision
using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    double sum = num1 + num2;

    cout << "Sum with default precision: " << sum << endl;

    cout << "Sum with precision set to 4: " << fixed << setprecision(4) << sum << endl;

    cout << "Sum with precision set to 8: " << fixed << setprecision(8) << sum << endl;

    return 0;
}
*/

/* Output:
Enter two floating-point numbers: 3.14159 2.71828
Sum with default precision: 5.85987
Sum with precision set to 4: 5.8599
Sum with precision set to 8: 5.85987000
*/
