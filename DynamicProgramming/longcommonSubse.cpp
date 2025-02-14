#include<bits/stdc++.h>
using namespace std;

//using recursion
int solve(string &a, string &b, int i, int j)
{
    //base case
    if(i==a.length())
    return 0;
    if(j==b.length())
    return 0;

    int ans = 0;
    if(a[i] == b[j])
    {
        ans = 1 + solve(a,b,i+1,j+1);
    }
    else
    {
        //no match ek bar i ko aage or ek bar j ko aage
        ans = max(solve(a,b,i+1,j) , solve(a,b,i,j+1));
    }
    return ans;
}
    
//using top down approach or recursion + Memoization
int solveUsingMemo(string &a, string &b, int i, int j, vector<vector<int>> &dp)
{
    //base case
    if(i==a.length())
    return 0;
    if(j==b.length())
    return 0;
        
    //step 3
    if(dp[i][j] != -1)
    return dp[i][j];

    //step 2
    int ans = 0;
    if(a[i] == b[j])
    {
        ans = 1 + solveUsingMemo(a,b,i+1,j+1,dp);
    }
    else
    {
        //no match ek bar i ko aage or ek bar j ko aage
        ans = max(solveUsingMemo(a,b,i+1,j,dp) , solveUsingMemo(a,b,i,j+1,dp));
    }
    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2) 
{
    //return solve(text1,text2,0,0);
    
    //---------------------------------------------
    //solve using recursion and memoization //step 1
    //vector<vector<int>> dp(text1.length(),vector<int>(text2.length(), -1));
    //return solveUsingMemo(text1,text2,0,0,dp);
    //--------------------------------------------------



}

int main()
{
    string text1, text2;
    
    cout << "Enter first string: ";
    cin >> text1;
    cout << "Enter second string: ";
    cin >> text2;
    
    int result = longestCommonSubsequence(text1, text2);
    cout << "Length of Longest Common Subsequence: " << result << endl;

}