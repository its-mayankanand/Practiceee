#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &nums , int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid =  start+(end-start) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
          start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 9;

    int output = BinarySearch(nums,target);
    cout<<output<<endl;


}