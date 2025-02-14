#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int low, int high)
{
    while (low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

void rotate(vector<int>& nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums, 0, n - k - 1);
    reverse(nums, n - k, n - 1);
    reverse(nums, 0, n - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}

