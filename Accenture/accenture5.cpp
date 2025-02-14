#include<bits/stdc++.h>
using namespace std;

//write a program to print the sum of all the Leaders in the array.
//An element is leader 
//if it is greater than all the elements to its right side.

// Function to calculate the sum of all leaders
int sumOfLeaders(int arr[], int n) 
{
    int sum = 0;

    // Outer loop to check each element if it's a leader
    for (int i = 0; i < n; i++) 
    {
        bool isLeader = true;

        // Inner loop to check if arr[i] is greater than all elements to its right
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] <= arr[j]) 
            { // If any element on the right is greater or equal
                isLeader = false;   // Then arr[i] is not a leader
                break;
            }
        }

        // If the element is a leader, add it to the sum
        if (isLeader) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfLeaders(arr, n);
    cout << "The sum of all leaders in the array is: " << result << endl;

    return 0;
}
