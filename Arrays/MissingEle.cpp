#include<iostream>
#include<vector>
using namespace std;
int missingNumber(int n, vector<int> &arr)
{
    //sum of all elements in an array(given elements)
    int sum = 0;
    for(int i=0; i<n-1; i++)
    {
        sum = sum + arr[i];
    }

    //sum of n number 
    int ans = n*(n+1)/2;

    return ans - sum;
}
int main()
{
    int n = 5;
    vector<int> arr = {1,2,4,5};

    int missing = missingNumber(n,arr);
    cout<<"The missing number is: "<<missing<<endl;
}