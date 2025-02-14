#include<iostream>
#include<vector>
using namespace std;

void negativeElement(vector<int> &nums)
{
    int n = nums.size();

    cout<<"All negative elements in an array are:";
    for(int i=0; i<n; i++)
    {
        if(nums[i] < 0)
        {
            cout<<nums[i]<<endl;
        }
    }
}
int main()
{
    vector<int> nums = {-1,3,4,-9,-2,8};

    negativeElement(nums);

}
