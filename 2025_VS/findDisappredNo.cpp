
// 448. Find All Numbers Disappeared in an Array [leetcode]
//Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
//Example 1:
//Input: nums = [4,3,2,7,8,2,3,1]
//Output: [5,6]

#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    int n = nums.size();

    vector<bool> present(n + 1, false);  // Track numbers from 1 to n
    // Mark the numbers that appear in nums
    for (int num : nums) 
    {
        present[num] = true;
    }

    // Collect missing numbers
    vector<int> result;
    for (int i = 1; i <= n; i++) 
    {
        if (!present[i]) // If false, number is missing
        result.push_back(i);
    }
    return result;
}
int main()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> missingNumbers = findDisappearedNumbers(nums);

    cout << "Missing Numbers: ";
    for (int num : missingNumbers) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}