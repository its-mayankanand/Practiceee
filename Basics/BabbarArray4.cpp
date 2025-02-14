#include<iostream>
using namespace std;

// How to store statically and dynamically in array
// and the concepts of vector.
/*
void fun(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    fun(arr,5);
}
*/
//----------------------------------------------

//Dynamically memory allocation

void fun(int arr[],int n)
{
    cout<<"Array elements are: "<<endl; 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n]; //by default 0 or garbage
    //taking input
    for(int i=0;i<n;i++)
    {
        int data;
        cout<<"Enter data you want to enter: "<<" ";
        cin>>data;
        arr[i] = data;
    }
    fun(arr,n);
}