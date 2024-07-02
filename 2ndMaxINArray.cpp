#include <iostream>
#include <climits>
using namespace std;

int SecondMax(int arr[], int N)
{
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    // Find the first maximum element
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > firstMax)
        {
            firstMax = arr[i];
        }
    }

    // Find the second maximum element
    for (int i = 0; i < N; i++)
    {
        if (arr[i] != firstMax && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int output = SecondMax(arr, n);
    cout << output << endl; // Output should be 4

    return 0;
}
