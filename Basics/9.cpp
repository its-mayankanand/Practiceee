#include<iostream>
using namespace std;

//Binary search full code
int BinarySearch(int arr[] , int n , int key)
{
    //start , end , mid;
    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(arr[mid] == key)
        return mid;

        else if(arr[mid] < key)       // if here i will use arr[mid] > key then the same
        start = mid + 1;              //code will run for the sorted decreasing order array 
        
        else
        end = mid - 1;
    }
    return -1;
}

int main()
{
   int arr[1000];

   int n;
   cout<<"Enter the number of elements in array: ";
   cin>>n;

   cout<<"Enter the elements of tha array: "<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int key;
   cout<<"Enter the key: "<<endl;
   cin>>key;

   cout<<BinarySearch(arr,n,key);
   
}