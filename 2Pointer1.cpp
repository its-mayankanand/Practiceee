#include<iostream>
using namespace std;

//sort 0's and 1's in array

void segregate(int arr[],int n)
{
   int start = 0;
   int end = n-1;

   while(start < end)
   {
    if(arr[start] ==0)
    {
        start++;
    }
    else
    {
        if(arr[end] == 0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else
        end--;
    }
   }
   //Printing final output array
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
   int arr[6] = {0,1,1,0,1,1};
   int n = 6;

   segregate(arr,n);


}