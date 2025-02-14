#include<bits/stdc++.h>
using namespace std;

void binSort(int arr[], int N)
{
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0; i<N; i++)
    {
        if(arr[i] == 0)
        zeroCount++;
        if(arr[i] == 1)
        oneCount++;
    }
       
    //PLace all zeroes and then place all ones
    int index = 0;
    while(zeroCount--)
    {
        arr[index] = 0;
        index++;
    }
    while(oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
   int arr[] = {0,1,0,1,0,1,0,1};
   int n = 8;

   //function calling
   binSort(arr,n);

   //printing array after sorting
   for(int i=0; i<n; i++)
   {
     cout<<arr[i]<<" ";
   }
}