#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) 
{

    vector<int> pos,neg;      

	int n = nums.size();

	for(int i=0;i<n;i++)
	{
	    if(nums[i] >= 0)
	    pos.push_back(nums[i]);
	    else
	    neg.push_back(nums[i]);
	}

    int i = 0 , j = 0 , k = 0 ;
	    
	// here k variable is used to place in the array
	// And i and j is used for the pos and neg vector

	while( i < pos.size() and j < neg.size() )
	{
	    nums[k++] = pos[i++];
	    nums[k++] = neg[j++];
	}
	    
	// suppose a positive element is left extra then
	    
	while(i < pos.size())
	{
	    nums[k++] = pos[i++];
	}
	    
	// suppose a negative element is left extra then
	    
	while(j < neg.size())
	{
	    nums[k++] = neg[j++];
	}
    return nums;
}

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> output = rearrangeArray(nums);
    
    cout << "Rearranged array: ";
    for (int i = 0; i < output.size(); i++) 
    {
        cout << output[i] << " ";
    }
    cout << endl;
}
