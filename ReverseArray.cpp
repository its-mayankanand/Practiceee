/*
#include<iostream>
using namespace std;

//Reverse an array

void ReverseArray(int arr[],int N,int start,int end)
{
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //Reversed Array
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int arr[6] = {1,2,3,4,5,6};

   int start = 0;
   int end = 5;
   int n = 6;

   ReverseArray(arr,n,start,end);
}

*/
//This method is also correct but we can do this by using 2 functions also
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<iostream>
using namespace std;

// Function to reverse an array
void ReverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to print an array
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = 5;

    // Reversing the array
    ReverseArray(arr, start, end);

    // Printing the reversed array
    PrintArray(arr, 6);

    return 0;
}
