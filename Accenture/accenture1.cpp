#include<iostream>
using namespace std;

/*
// Function to calculate factorial
long long factorial(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of students (n): ";
    cin >> n;

    // Calculate n!
    long long numberOfWays = factorial(n);

    cout << "Number of ways to seat " << n << " students is: " << numberOfWays << endl;

    return 0;
}

*/

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n)
{
    // Base case
    if (n == 1 || n == 0) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() 
{
    int n;
    cout << "Enter the number of students (n): ";
    cin >> n;

    // Calculate n! recursively
    long long numberOfWays = factorial(n);

    cout << "Number of ways to seat " << n << " students is: " << numberOfWays << endl;

    return 0;
}

