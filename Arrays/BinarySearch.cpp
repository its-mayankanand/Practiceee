#include<iostream>
using namespace std;

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
          start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
       mid =  start+(end-start) / 2;
    }
    return -1;
}


int main()
{
    int arr[6] = {1,3,5,7,9,12};
    int n = 6;
    int key = 5;

    int output = BinarySearch(arr,n,key);
    cout<<output<<endl;
}