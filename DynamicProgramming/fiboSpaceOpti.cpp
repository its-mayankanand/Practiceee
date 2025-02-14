#include<iostream>
#include<vector>
using namespace std;

//To optimize the space complexity of your Fibonacci sequence calculation, 
//you can eliminate the use of a dp array. 
//Since Fibonacci numbers only depend on the previous two values, you can maintain 
//just two variables to store these values. This reduces the space complexity from O(n) 
//to O(1)

int solveUsingSpaceOptimization(int n) 
{
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Variables to store the last two Fibonacci numbers
    int prev2 = 0; // Represents dp[i-2]
    int prev1 = 1; // Represents dp[i-1]

    // Calculate Fibonacci using space optimization
    for (int i = 2; i <= n; i++) 
    {
        int curr = prev1 + prev2; // Current Fibonacci number
        prev2 = prev1;           // Update dp[i-2]
        prev1 = curr;            // Update dp[i-1]
    }

    return prev1; // nth Fibonacci number
}

int main() {
    int number;
    cout << "Enter number:" << endl;
    cin >> number;

    if (number < 0) 
    {
        cout << "Invalid input. Please enter a non-negative number." << endl;
        return 0;
    }

    int result = solveUsingSpaceOptimization(number);
    cout << "Fibonacci number at position " << number << " is: " << result << endl;

    return 0;
}



