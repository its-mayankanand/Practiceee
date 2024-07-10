/*
#include<iostream>
#include<vector>
using namespace std;
//Two Sum Leetcode Problem
//This code is not running in leetcode i think due to its time complexity
vector<int> twoSum(vector<int>& nums, int target) 
{
    int n = nums.size();
    vector<int> ans;

    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 26;
    
    //calling function and storing 
    vector<int> output = twoSum(nums,target);
    cout<<output[0]<<endl;
    cout<<output[1]<<endl;
}
*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    vector<int> ans;
    int start = 0 , end = numbers.size()-1;

    while(start < end)
    {
        if(numbers[start] + numbers[end] == target)
        {
            ans.push_back(start);  //if 1 based indexing then ans.push_back(start+1) and same end wala...
            ans.push_back(end);
            return ans;
        }
        else if(numbers[start] + numbers[end] < target)
        //agr less hai (sum)and mallom hai ki sorted hai
        //toh end-- krne pe toh aur chota hi milega na 
        //isliye start++ kiye
        start++;
            
        else
        end--;

    }
    return ans;
}

int main()
{
    vector<int> numbers = {2,7,11,15};
    int target = 26;

    vector<int> output = twoSum(numbers,target);
    cout<<output[0]<<endl;
    cout<<output[1]<<endl;
}