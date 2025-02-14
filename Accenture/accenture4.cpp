#include<bits/stdc++.h>
using namespace std;

//Find maximum element and its index
//1 2 3 4 5 6 7
//Output: 7
//and output : 6

void max_ele(int arr[] , int n)
{
    int maxi = INT_MIN;
    int idx = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            idx = i;
        }
    }

    cout<<(maxi)<<" "<<idx<<endl;
}
int main()
{
    int arr[6] = {52,36,98,102,14,78};
    max_ele(arr,6);
}