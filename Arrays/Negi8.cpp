#include<bits/stdc++.h>
using namespace std;

//Print all negative elements of an array or vector

void neggativeElement(vector<int> &arr, int n)
{
   cout<<"All negative elements of an array are: "<<endl;
   for(int i=0; i<n; i++)
   {
    if(arr[i] < 0)
    {
       cout<<arr[i]<<endl;
    }
   }
}
int main()
{
   vector<int> arr = {1,2,-1,-2,-5,-6,3,4};
   int N = 8;

   //calling of the function
   neggativeElement(arr, N);
}