#include<iostream>
using namespace std;

//THis is when the array is in Decreasing order

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid =  start+(end-start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
          end = mid - 1;
        }
        else
        {
            start=mid+1;
        }
       mid =  start+(end-start) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {60,50,40,30,20,10};
    int n = 6;
    int key = 50;

    int output = BinarySearch(arr,n,key);
    cout<<output<<endl;
}