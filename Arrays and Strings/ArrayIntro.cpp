/* 
Array in C++
    Definition: 
                An array is a collection of elements of the same data type stored in contiguous memory locations 
                and accessed using an index number.

Index always starts from 0 in C++.

Example:
                int arr[5] = {10, 20, 30, 40, 50};

Here:

arr → array name
5 → size
int → data type
arr[0] = 10, arr[1] = 20 , arr[2] = 30, arr[3] = 40, arr[4] = 50

//Types of Arrays in C++
1.One-Dimensional Array (1D Array)

Definition: 
        A linear list of elements stored in a single row.

Syntax:
        data_type array_name[size];

Example:
        int marks[3] = {85, 90, 78};

Memory Representation:
        marks[0]  marks[1]  marks[2]
           85        90        78

Accessing Elements:
        cout << marks[1];  // Output: 90


//2️.Two-Dimensional Array (2D Array)
Definition:
            An array of arrays (matrix format: rows × columns).

Syntax:
            data_type array_name[rows][columns];
Example:
            int matrix[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
            };
Memory Representation:
            1  2  3
            4  5  6

Accessing Elements:
            cout << matrix[1][2];  // Output: 6


//3️.Multi-Dimensional Array
Definition:
            An array with more than two dimensions (e.g., 3D, 4D).
Example (3D):
            int arr[2][2][2];

Used in:
3D graphics
Scientific calculations
Game development logic

//Other Classification (Based on Memory)

1.Static Array
Size is fixed at compile time

int arr[10];


2.Dynamic Array
Size decided at runtime

int n;
cin >> n;
int* arr = new int[n];


//Important Characteristics of Array:

Stores same type of elements
Uses indexing
Stored in continuous memory
Faster access (O(1))
Fixed size (normal arrays)

*/