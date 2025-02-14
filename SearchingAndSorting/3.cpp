/*
Given an array arr of only 0's and 1's. 
The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. 
Find the count of all the 0's.
Basic Approach

#include<bits/stdc++.h>
using namespace std;

int countZeroes(vector<int> &arr) 
{
    int zeroCount = 0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] == 0)
        zeroCount++;
    }
    return zeroCount;
}

int main()
{
    vector<int> arr = {1,1,1,0,0,0,0,0};
    int result = countZeroes(arr);
    cout<<result<<endl;
}
*/
//----------------------------------------------------------------------
//Main Approach

#include<bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n) 
{
    int s = 0; // Starting index
    int e = n - 1; // Ending index
    while (s <= e) 
    {
        int mid = s + (e - s) / 2; // Calculate the mid index
        
        // Check if we found a 0
        if (arr[mid] == 0) 
        {
            // If it's 0, it could be the first 0, so look to the left
            e = mid - 1;
        } 
        else 
        {
            // If it's 1, we look to the right
            s = mid + 1;
        }
    }
    
    // After the loop, s points to the first occurrence of 0
    return n - s; // Count of 0s
}

int main() 
{
    int arr[] = {1, 1, 1, 0, 0, 0,0}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = countZeroes(arr, n);
    cout << "The count of 0's is: " << count << endl;

    return 0;
}


