#include<iostream>
#include<vector>
using namespace std;

//Find First and Last Position of Element in Sorted Array
vector<int> searchRange(vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int first = -1 , last = -1 , mid;

    //Find First
    while(start<=end)
    {
        mid = start + (end-start) / 2;
        if(nums[mid] == target)
        {
            first = mid;
            end = mid -1;      // left me move karne ke liye
        }
        else if(nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Reset start and end for the second search
    start = 0;
    end = nums.size() - 1;

    //Find Last
    while(start<=end)
    {
        mid = start + (end-start) / 2;
        if(nums[mid] == target)
        {
            last = mid;
            start = mid + 1;      // left me move karne ke liye
        }
        else if(nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    vector<int> a(2);
    a[0] = first;
    a[1] = last;

    return a;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = searchRange(nums,target);
    cout<<result[0]<<endl;
    cout<<result[1]<<endl;
}