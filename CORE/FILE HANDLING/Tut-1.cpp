//C++ Files and Streams
/*
1.Fstream:  Used for file handling in C++. It provides classes like ifstream (input file stream) and 
            ofstream (output file stream) to read from and write to files.

        ->Ifstream:  Used for both input and output file handling. It allows you to read from and write to the same file.
        ->ofstream:  Used for output file handling. It allows you to create a file and write to a file.

2.Open and Close Files:  You can open a file using the is_open() function and close it using the close() function.
*/

/*
1.File Modes:  You can specify the mode in which you want to open a file (e.g., ios::in for reading, ios::out for writing, ios::app for appending).
2.File Operations:  You can perform various operations on files, such as reading, writing, and checking if a file is open.
3.Error Handling:  You can handle errors that may occur during file operations using exception handling.

*/

//Example of writing to a file in C++
#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to javaTpoint.\n";  
    filestream << "C++ Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}

//It creates a file named "testout.txt" and writes the specified text to it. If the file cannot be opened, it displays an error message.


//Example of reading from a file in C++

#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  string srg;  
  ifstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    while ( getline (filestream,srg) )  
    {  
      cout << srg <<endl;  
    }  
    filestream.close();  
  }  
  else {  
      cout << "File opening is fail."<<endl;   
    }  
  return 0;  
} 
//Output
/*
Welcome to javaTpoint.
C++ Tutorial.
*/
//Reads the content of "testout.txt" and displays it on the console. If the file cannot be opened, it displays an error message.


//Example of appending to a file in C++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream filestream("testout.txt", ios::app); 
    if (filestream.is_open())
    {
        filestream << "This is an appended line.\n";
        filestream.close();
    }
    else
    {
        cout << "File opening is fail." << endl;
    }
    return 0;
}

//Appends a new line to "testout.txt". If the file cannot be opened, it displays an error message.
/* in testout.txt 
The file now contains:
Welcome to javaTpoint.
C++ Tutorial.
This is an appended line.
*/

