/*
#include<iostream>
#include<vector>
using namespace std;

//This is Bruete Force approach its time complexity is very high

int bruteforce (vector<int>&nums)
{
    for(int i=0;i<nums.size();i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        //find left sum excluding current index
        for(int j=0;j<i;j++)
        {
            leftsum += nums[j];
        }
        //find right sum excluding current index
        for(int j=i+1;j<nums.size();j++)
        {
            rightsum += nums[j];
        }

        if(leftsum == rightsum)
        return i;


    }
    return -1;
}

int pivotIndex(vector<int>& nums) 
{
   return bruteforce(nums);
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};

    int output = pivotIndex(nums);
    cout<<output<<endl;
}

*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<iostream>
#include<vector>
using namespace std;

int prefixSumApproach(vector<int> &nums)
{
    vector<int>lsum(nums.size(),0);
    vector<int>rsum(nums.size(),0);

    //cal . lsum array
    for(int i=1; i<nums.size(); i++)
    {
        lsum[i] = lsum[i-1] + nums[i-1];
    }

    //cal . rsum array
    for(int i=nums.size()-2; i>=0; i--)
    {
        rsum[i] = rsum[i+1] + nums[i+1];
    }

    //check krte hai
    for(int i=0;i<nums.size();i++)
    {
        if(lsum[i] == rsum[i])
        return i;
    }

    return -1;
}
    
int pivotIndex(vector<int>& nums) 
{
    return prefixSumApproach(nums);
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};

    int output = pivotIndex(nums);
    cout<<output<<endl;
    
}
