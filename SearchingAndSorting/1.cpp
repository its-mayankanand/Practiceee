#include<bits/stdc++.h>
using namespace std;

//Searching an Element in an Sorted Array

//Given an array arr[] sorted in ascending order of size N and an integer K. 
//Check if K is present in the array or not. 


int searchInSorted(int arr[], int N, int K) 
{ 
    int s = 0 , e = N-1;
    int mid = (s+e) / 2;
    //if mid declaration is outside while then have to update at last
    while(s <= e)
    {
        if(arr[mid] == K)
        {  
            return true;
        }
        else if(arr[mid] < K)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s+e) / 2; 
    }
    return -1;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int K = 6;

    //calling of the function
    int result = searchInSorted(arr, n, K);
    
    // Output the result
    if (result == -1) 
    {
        cout << "Element " << K << " not found in the array." << endl;
    } 
    else 
    {
        cout << "Element " << K << " found in the array." << endl;
    }

}