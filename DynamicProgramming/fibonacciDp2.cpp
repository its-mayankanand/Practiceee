#include<iostream>
#include<vector>
using namespace std;

int solveUsingTabulation(int n)
{
    //step1: create dp array
    vector<int> dp(n+1, -1);

    //step2: analyze base case and fill dp array
    dp[0] = 0;
    if(n==0)
       return dp[0];
    dp[1] = 1;

    //step3: fill the remaining dp array
    //size = n+1
    //index fill ho chuka hai -> 0 and 1
    //bacha konsa index = 2 -> n;
    for(int i=2; i<=n; i++)
    {
        //copy paste the recursive logic
        //replace recursive calls with dp array
        //make sure dp array is using looping variable i
        dp[i] = dp[i-1] + dp[i-2];
    }

    //return answer or nth fibonacci number
    return dp[n];
}
// int solveUsingTabulationSpaceOptimised(int n)
// {
//     //step1: create dp array
//     //vector<int> dp(n+1, -1);

//     //step2: analyze base case and fill dp array
//     int prev = 0;
//     if(n==0)
//        return 0;
//     int curr = 1;
//     if(n == 1)
//        return 1;

//     //step3: fill the remaining dp array
//     //size = n+1
//     //index fill ho chuka hai -> 0 and 1
//     //bacha konsa index = 2 -> n;
//     int ans;
//     for(int i=2; i<=n; i++)
//     {
//         //copy paste the recursive logic
//         //replace recursive calls with dp array
//         //make sure dp array is using looping variable i
//         //dp[i] = dp[i-1] + dp[i-2];
//         ans = curr + prev;
//         prev = curr;
//         curr = ans;
//     }

//     //return answer or nth fibonacci number
//     return ans;
// }

int main()
{
    int number;
    cout<<"enter number:"<<endl;
    cin>>number;

    int result = solveUsingTabulation(number);
    cout<<result<<endl;

    // int result = solveUsingTabulationSpaceOptimised(number);
    // cout<<result<<endl;
}
