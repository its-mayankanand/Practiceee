#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//This will work for only the positive value but not for the negative values
//and this is only the brute force approach
//this is somewhere between O(n^3) not exactly but yeeah
/*
int longestSubarray(vector<int>& arr, int k) 
{
    int n = arr.size();
    int length = 0;
    for(int i=0; i<n ; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int l = i; l<=j; l++)
            {
                sum = sum + arr[l];
            }
            if(sum == k)
            length = max(length, j-i+1);
        }
    }
    return length;
}
*/
//this is quite a better one for positive one somewhere approx O(n^2)
/*
int longestSubarray(vector<int>& arr, int k) 
{
    int n = arr.size();
    int length = 0;
    for(int i=0; i<n ; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
        
            if(sum == k)
            length = max(length, j-i+1);
        }
    }
    return length;
}
*/

//This is the best approach as this is sliding window approach 
//This takes O(n^2)
//but this is only valid for postives values 
//for positives and negative both have to use Hashmap

int longestSubarray(vector<int>& arr, int k) 
{
    int n = arr.size();
    int start = 0, sum = 0, length = 0;

    for (int end = 0; end < n; end++) 
    {
        sum += arr[end];  // Expand the window by adding arr[end]

        // Shrink the window while the sum is greater than k
        while (sum > k && start <= end) 
        {
            sum -= arr[start];
            start++;
        }

        // Check if the current window sum equals k
        if (sum == k) 
        {
            length = max(length, end - start + 1);
        }
    }

    return length;
}

int main()
{
   vector<int> arr = {1,2,3,4,5,6};
   int k = 9;

   int result = longestSubarray(arr,k);
   cout<<result<<endl;
}