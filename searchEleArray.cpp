#include<iostream>
using namespace std;

//Search an element in an array and return its index if it is present.
int Search(int arr[] , int N , int X)
{
    for(int i=0; i<N; i++)
    {
        if(arr[i] == X)
        return i;
    }
    return -1;
}

int main()
{
    int arr[5];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    int n = 5;
    
    int x;
    cout<<"Enter element you want to search: "<<endl;
    cin>>x;

    
    int output = Search(arr,n,x);
    cout<<output<<endl;
}