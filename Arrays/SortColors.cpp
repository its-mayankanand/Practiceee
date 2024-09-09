#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) 
{
    //count method
    int zeros,ones,twos;
    zeros = ones = twos = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 0)
        {
            zeros++;
        }
        else if(nums[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }      
    }
    //spread
    int i=0;
    while(zeros--)
    {
        nums[i] = 0;
        i++;
    }
    while(ones--)
    {
        nums[i] = 1;
        i++;
    }
    while(twos--)
    {
        nums[i] = 2;
        i++;
    }
}
int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);

    // Print the sorted array
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}