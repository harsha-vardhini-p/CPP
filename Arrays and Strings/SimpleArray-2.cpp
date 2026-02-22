//Counting the occurences of a key in an array and outputting the index of each occurrence of the key

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key,count = 0;
    cout<<"Enter the key to be search: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Element found at index: " << i << endl;// Output the index of each occurrence of the key
            count++;// Increment the count for each occurrence of the key
        }
    }
    if(count == 0)
    {
        cout<<"Element not found in the array." << endl;
    }
    else
    {
        cout<<"Element "<<key<<" appears "<<count<<" times in the array." << endl;
    }
    delete[] arr;// Deallocate the dynamically allocated array
return 0;
}

/*
Output:
Enter the size of the array: 5
Enter the elements of the array: 2 2 2 2 2
Enter the key to be search: 2
Element found at index: 0
Element found at index: 1
Element found at index: 2
Element found at index: 3
Element found at index: 4
Element 2 appears 5 times in the array.
*/