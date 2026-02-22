/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    int found=0;
    
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int *arr = new int[n];// Dynamic memory allocation for the array
    
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key to be search: ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            cout<<"Element found at index: " << i << endl;
            break;
        }
    }
    if(found == 0)
    {
        cout<<"Element not found in the array." << endl;
    }
    
    return 0;
}
*/



#include <iostream>
using namespace std;

int main()
{
    int n;
    int index = -1;
    
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key to be search: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            index = i;// Store the index of the found element
            break;
        }
    }
    if(index == -1)
    {
        cout<<"Element not found in the array." << endl;
    }
    else
    {
        cout<<"Element found at index: " << index << endl;// Output the index of the found element
    }
    return 0;
}
/*
Output:
Enter the size of the array: 3
Enter the elements of the array: 40 30 70
Enter the key to be search: 30
Element found at index: 1
*/