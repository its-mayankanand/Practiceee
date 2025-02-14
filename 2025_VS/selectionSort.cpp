#include<bits/stdc++.h>
using namespace std;

int selectionSort(vector<int> &nums)
{
   int n = nums.size();
   for(int i=0;i<=n-2;i++)
   {
    int min = i;
    for(int j=i;j<n-1;j++)
    {
       if(nums[j] < nums[min])
       min = j;
    }
    swap(nums[min],nums[i]);
   }
}
int main()
{
    vector<int> nums = {2,1,4,3,5};

    selectionSort(nums);

    for(int num:nums)
    {
        cout<<num<<" ";
    }
}