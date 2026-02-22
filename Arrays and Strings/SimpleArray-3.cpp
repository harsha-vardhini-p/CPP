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
        cout<<"Elements at even indices: ";
        for(int i=0;i<n;i+=2)
        {
                cout<<arr[i]<<" ";// Output the elements at even indices
        }
        cout<<endl;

    delete[] arr;// Deallocate the dynamically allocated array

    


return 0;
}
/*
Output:
Enter the size of the array: 5
Enter the elements of the array: 10 20 30 40 50
Elements at even indices: 10 30 50 
*/