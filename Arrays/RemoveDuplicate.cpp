#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    if (nums.empty()) 
    {
        return 0; // If the array is empty, return 0
    }

    int i = 0; // Initialize the pointer i

    for (int j = 1; j < nums.size(); ++j) 
    {
        if (nums[j] != nums[i])  // Found a new unique element
        { 
            i++; // Move the pointer i

            nums[i] = nums[j]; // Place the unique element at position i
        }
    }

    return i + 1; // Return the count of unique elements
}

int main() 
{
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int unique_count = removeDuplicates(nums);
    
    cout << "Number of unique elements: " << unique_count << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < unique_count; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}