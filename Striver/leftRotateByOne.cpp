#include <iostream>
#include <vector>
using namespace std;

/*
void rotateLeftByOne(vector<int>& nums, int k)
{
    int n = nums.size();
    int temp = nums[0];
    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1;

    cout << "Original array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    rotateLeftByOne(nums, k);

    cout << "Array after left rotation by one: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
*/
//--------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeftByOne(vector<int>& nums , int k) // Use const reference for input
{
    int n = nums.size();
    int temp = nums[0];
    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1;

    cout << "Original array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    vector<int> result = rotateLeftByOne(nums,k); // Get the rotated array

    cout << "Array after left rotation by one: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}

