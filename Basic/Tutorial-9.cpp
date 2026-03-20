//Input and Output

#include <iostream>
using namespace std;

int main()
{
    //Output statement
    cout<<"Welcome to C++ programming!";

    //Input statement
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Your age is: "<<age;
    
    return 0;
}
//Output:
// Welcome to C++ programming!
// Enter your age: 25
// Your age is: 25


#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name;

    return 0;
}
//Output:
// TaylorSwift

/*Here in the above example, if the user enters "Taylor Swift", only "Taylor" will be stored in the variable 'name'
 because 'cin' reads input until it encounters a whitespace character. To read a full line of input including spaces, we can use the 'getline' function instead of 'cin'.
*/

#include <iostream>
#include <string>
using namespace std;            

int main()
{   
    string name;
    cout<<"Enter your name: ";
    getline(cin, name); // Using getline to read the full line of input
    cout<<"Your name is: "<<name;

    return 0;
}
//Output:
// Taylor Swift 


/*
cin.ignore() is used to ignore the next character in the input buffer, which is often used to 
clear the newline character left by previous input operations. This is particularly useful when switching between 
different types of input (e.g., from numeric input to string input) to ensure that the input buffer is clean and ready for the next input operation.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cin.ignore(); // Ignore the newline character left in the input buffer

    string name;
    cout<<"Enter your name: ";
    getline(cin, name); // Using getline to read the full line of input
    cout<<"Your name is: "<<name;
    
    return 0;
}
//Output:
// Enter your age: 25
// Enter your name: Taylor Swift
// Your name is: Taylor Swift

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout<<"Enter your age: ";
    cin>>age;
    getline(cin,name); 
    cout<<"Your age is: "<<age<<endl;
    cout<<"Your name is: "<<name<<endl;
} 
//Output:
// Enter your age: 25
// Your age is: 25
// Your name is: 

/*
    In the above code snippet, after reading the age using 'cin', we call 'getline(cin, name)' to read the name. 
    However, since 'cin' leaves a newline character in the input buffer after reading the age, 'getline' reads that newline character instead of 
    waiting for the user to input their name. As a result, the 'name' variable ends up being empty. To fix this issue, we can use 
    'cin.ignore()' to ignore the leftover newline character before calling 'getline'.

    Correction:
    cin>>age;
    cin.ignore();
    getline(cin,name);
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    string b;

    cin >> a;
    cin.ignore(1000, '\n');// Ignore the next 1000 characters or until a newline character is encountered
    getline(cin, b);

    cout << a << " " << b;
}

//Output:
// 25 Taylor Swift