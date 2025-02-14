#include<bits/stdc++.h>
using namespace std;

/*
int removeDuplicates(vector<int>& nums) 
{
    set<int> st;
    for (int i = 0; i < nums.size(); i++) 
    {
        st.insert(nums[i]); // Insert elements into the set to remove duplicates
    }

    int index = 0;
    for (auto it : st) 
    {
        nums[index] = it; // Copy unique elements back to nums
        index++;
    }

    return st.size(); // Return the count of unique elements
}

int main() 
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5};

    int newSize = removeDuplicates(nums);
    cout << "New size after removing duplicates: " << newSize << endl;

    // cout << "Elements after removing duplicates: ";
    // for (int num : nums) 
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    // return 0;
}
//in this the time and space complexity will be high due to extra space and 2 times traversing.
*/

int removeDuplicates(vector<int>& nums) 
{
    int n = nums.size();
    int i = 0;
    for(int j=1;j<n;j++)
    {
        if(nums[j] != nums[i])
        {
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    vector<int> nums = {1,2,2,3,4,4,5,6};

    int result = removeDuplicates(nums);
    cout<<result<<endl;
}

