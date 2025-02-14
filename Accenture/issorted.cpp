#include<iostream>
using namespace std;

int isSorted(int arr[] , int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] >= arr[i-1])
        {

        }
        else
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int arr[5] = {1,2,2,4,5};
    int n = 5;

    int result = isSorted(arr,n);
    cout<<result<<endl;
}