#include<iostream>
#include<vector>
using namespace std;

//Search Insert Position of an Element
int searchInsert(vector<int>& nums, int target) 
{
    int start = 0 , end = nums.size() - 1 , ans = nums.size() , mid ;

    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] == target)
        {
            ans = mid;
            break;
            // or we can write return mid; 
        }
        else if(nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 5;

    int output = searchInsert(nums,target);
    cout<<output<<endl;

}