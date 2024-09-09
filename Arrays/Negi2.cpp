#include<iostream>
using namespace std;

//check equal arrays

#include <iostream>
#include <vector>
#include <algorithm>  // For sort()
using namespace std;

bool check(vector<int>& arr1, vector<int>& arr2) 
{
    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    // Check if the arrays are of the same size
    if(arr1.size() != arr2.size())
    return false;

    // Compare elements one by one
    for(int i = 0; i < arr1.size(); i++) 
    {
        if(arr1[i] != arr2[i])
        return false;
    }
    return true;
}

int main()
{
    // Example arrays
    vector<int> arr1 = {1, 2, 3, 6, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};

    // Call check function to compare arrays
    if(check(arr1, arr2))
        cout << "The arrays are equal after sorting." << endl;
    else
        cout << "The arrays are not equal." << endl;

    return 0;
}
