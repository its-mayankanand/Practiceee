#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums,int n)
{
   
   int zeroCount = 0, oneCount = 0, twoCount = 0;
   for(int i=0;i<n;i++)
   {
    if(nums[i] == 0)
    zeroCount++;
    else if(nums[i] ==1)
    oneCount++;
    else
    twoCount++;
   }

    //spread
    int j = 0;
    while(zeroCount--)
    {
        nums[j++] = 0;
    }
    while(oneCount--)
    {
        nums[j++] = 1;
    }
    while(twoCount--)
    {
        nums[j++] = 2;
    }
   
}
int main()
{
    vector<int> nums = {0,2,1,0,1,2,0,1,2};
    int n = nums.size();
    sort012(nums,n);
    

    for(int i =0 ;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}