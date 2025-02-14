#include<iostream>
#include<vector>
using namespace std;

//top down approach - recursion + memoization
int solveUsingMemo(int n, vector<int> &dp)
{
    //base case
    if(n==0 || n==1)
    {
        return n;
    }
    //step3: if ans already exists then return ans
    if(dp[n] != -1)
    {
        return dp[n];
    }

    //rec relation
    //step2: store and return using dp array
    dp[n] = solveUsingMemo(n-1,dp) + solveUsingMemo(n-2,dp);
    return dp[n];

}
int fib(int n)
{
    vector<int> dp(n+1 , -1);
    int ans = solveUsingMemo(n,dp);
    return ans;
}
int main()
{
    int number;
    cout<<"enter number:"<<endl;
    cin>>number;

    int result = fib(number);
    cout<<result<<endl;
}