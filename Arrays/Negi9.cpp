#include<bits/stdc++.h>
using namespace std;

//Move negative element to left of the array 
//General case where order doesnot matter
//Dutch National Flag Algorithm

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
