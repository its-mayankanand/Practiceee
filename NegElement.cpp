/*
//print all the negative element of an array or vector
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
*/
//-----------------------------------------------------

//Move all Negative Number To the left side 
//of an array
//And yes positive ka order matter nhi krta
#include<iostream>
#include<vector>
using namespace std;

void moveAllNegToLeft(vector<int> &arr)
{
    int n = arr.size();
    //Dutch National flag Algo.
    int low = 0 , high = n-1;
    while(low < high)
    {
        if(arr[low] < 0)
        {
            low++;
        }
        else if(arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low] , arr[high]);
        }
    }
    //printing final array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    vector<int> arr= {1,2,-3,4,-5,6,0,-5,34,-7};
    moveAllNegToLeft(arr);
}
