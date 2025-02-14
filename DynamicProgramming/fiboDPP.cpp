#include<bits/stdc++.h>
using namespace std;

int solveUsingRecursion(int n)
{
    //base case
    if(n==0 || n==1)
    {
        return n;
    }
    //recursive relation
    int ans = solveUsingRecursion(n-1)+solveUsingRecursion(n-2);
    return ans;
}

//recursion + memo top down
int solveUsingMemoisation(int n, vector<int> &dp)
{
    //base case
    if(n==0 || n==1)
    {
        return n;
    }
    //step3: check if already exist,then return ans
    if(dp[n] != -1)
    {
        return dp[n];
    }
    //recursive relation
    //step2: store ans in dp array
    dp[n] = solveUsingMemoisation(n-1,dp)+solveUsingMemoisation(n-2,dp);
    return dp[n];
}

//tabulation method
int solveUsingTabulation(int n)
{
    //step1: create dp array
    vector<int> dp(n+1, -1);
    //step2: analyse base case and fill dp array
    dp[0] = 0;
    if(n==0)
    return 0;
    dp[1] = 1;
    //step3: fill the remaining dp array
    //array size = n+1
    //index move from 0 to n
    //0 and 1 ko already fill krlia h
    //2 index se n index tak abhi filled nhi hah
    for(int i=2; i<=n; i++)
    {
        //copy paste recursive logic
        //replace recursive calls with dp array
        //make sure dp array is usinglooping variable
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}

int fib(int n) 
{
    // int ans = solveUsingRecursion(n);
    // return ans;
        

    //step1: create dp array
    // vector<int> dp(n+1, -1); //0 -> n
    // int ans = solveUsingMemoisation(n,dp);
    // return ans;
        
    //Tabulation method 
    int ans = solveUsingTabulation(n);
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