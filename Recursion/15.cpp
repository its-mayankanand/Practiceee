#include<iostream>
using namespace std;

// int sum (int arr[] , int index , int n)
// {
//     if(index == n)
//     return 0;

//     return arr[index] + sum(arr,index+1,n);
// }
// int main()
// {
//     int arr[] = {3,2,1,3,4};

//     cout<<sum(arr,0,5);
// }

//----------------------------------

//Find minimum in an array

int minelement(int arr[] , int index , int n)
{
    if(index == n-1)
    return arr[index];

    return min(arr[index] , minelement(arr,index+1,n));
    
}
int main()
{
    int arr[] = {3,4,1,2,8};

    cout<<minelement(arr,0,5);
}