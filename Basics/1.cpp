#include<iostream>
#define MAX_SIZE 100
using namespace std;

//Take an array as input its size also and its elements also
//and then print all the negative elements of it

void printNegative(int arr[] , int n)
{
   cout<<"All negative elements in an array are:";
   for(int i=0;i<n;i++)
   {
     if(arr[i] < 0)
     {
        cout<<arr[i]<<endl;
     }
   }
}
int main()
{
    int arr[MAX_SIZE];

    int N;
    cout<<"Enter the size of an array: ";
    cin>>N;

    cout<<"Enter elements in array: ";
    for(int i =0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    //calling the function
    printNegative(arr,N);
}