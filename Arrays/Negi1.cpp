#include<iostream>
#include<vector>
using namespace std;

/*
int search(vector<int> &arr, int x) 
{
    int N = arr.size();
        
    for(int i=0;i<N;i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};

    int target = 6;

    int result = search(arr,target);
    cout<<result<<endl;
}

*/

//--------------------------------------------------------------------
//More simplied version

// Function to search for an element in a vector
int search(vector<int> &arr, int x) 
{
    int N = arr.size();
    for(int i = 0; i < N; i++) 
    {
        if(arr[i] == x) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    vector<int> arr = {10, 20, 30, 40, 50}; // Example array
    
    int x;
    cout << "Enter the number to search: ";
    cin >> x;

    // Call search function
    int result = search(arr, x);

    // Output the result
    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
