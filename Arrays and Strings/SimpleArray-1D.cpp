//Reading and printing elements of an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the elements of the array of size 5: ";
    for(int i = 0 ; i < size; i++)
    {
        cin>>arr[i];
    }

    //Printing the elements of the array
    cout<<"The elements of the array are: ";
    for(int i = 0 ; i < 5; i++)
    {
        cout<<arr[i]<<" ";  
    }
    cout<<endl;
    //Output: The elements of the array are: 1 2 3 4 5 (if user input is 1,2,3,4,5)
    cout<<endl;

    //Finding sum and average of the elements in the array.
    int sum = 0;
    float average;

    for(int i = 0; i<size; i++)
    {
        sum += arr[i];
    }

    average = static_cast<float>(sum)/size;
    //static_cast is used to convert the sum to float before division to get a more accurate average value.
    cout<<"Sum = " << sum << endl;
    cout<<"Average = " << average << endl;

    //Output: Sum = 15
    //Average = 3 (if user input is 1,2,3,4,5)
    cout<<endl;
    
    //Finding the maximum and minimum element in the array.
    int max = arr[0];
    int min = arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        { 
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];    
        }

    }
    cout<<"Maximum element = " << max << endl;
    cout<<"Minimum element = " << min << endl;
    
    //Output: Maximum element = 982
    //        Minimum element = 23 if user input is (36 92 982 23 54)
    cout<<endl;

    //Counting the number of even and odd elements in the array.
    int evenCount = 0;
    int oddCount = 0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"Number of even elements = " << evenCount << endl;
    cout<<"Number of odd elements = " << oddCount << endl;
    
    //Output:(user input is 36 92 982 23 54)
    //Number of even elements = 4
    //Number of odd elements = 1
    cout<<endl;

    //Finding the positive ,negative and zero elements in the array.
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            positiveCount++;
        }
        else if(arr[i]<0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    cout<<"Number of positive elements = " << positiveCount << endl;
    cout<<"Number of negative elements = " << negativeCount << endl;
    cout<<"Number of zero elements = " << zeroCount << endl;
    //Output:(user input is 36 -92 0 23 -54)
    //Number of positive elements = 2
    //Number of negative elements = 2
    //Number of zero elements = 1
    cout<<endl;

    //Reversing the elements of the array.
    cout<<"The elements of the array in reverse order are: ";
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    //Output:(user input is 36 -92 0 23 -54)
    //The elements of the array in reverse order are: -54 23 0 -92 36

    cout<<endl;

    //Copying the elements of the array to another array.
    int arr2[5];
    for(int i=0;i<size;i++)
    {
        arr2[i] = arr[i];
    }
    cout<<"The elements of the second array are: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr2[i]<<" ";
    }

    //Output:(user input is 36 -92 0 23 -54)
    //The elements of the second array are: 36 -92 0 23 -54
    
    cout<<endl;

   
    return 0;

}

