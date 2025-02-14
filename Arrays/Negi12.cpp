#include<bits/stdc++.h>
using namespace std;

//Move All Negative Elements to the Left of the array

void segregateElements(vector<int> &arr) 
{
    int n = arr.size();
    
    // Create a temporary array to store result
    vector<int> temp(n);
    int j = 0; // Index for temp array
    
    // First store all negative elements in temp[]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }

    // Then store all positive elements in temp[]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j++] = arr[i];
        }
    }
    
    // Copy the contents of temp[] to arr[]
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    vector<int> arr = {1, -2, 3, -4, -5, 6, 7, -8, 9};
    
    //calling function
    segregateElements(arr);
    
    //Printing the required array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
