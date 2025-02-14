#include <bits/stdc++.h>
using namespace std;

// Pass the vector by const reference to avoid copying
pair<long long, long long> getMinMax(vector<long long>& arr) 
{
    long long mn = LLONG_MAX;
    long long mx = LLONG_MIN;
    
    for(int i = 0; i < arr.size(); i++) 
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    
    return {mn, mx};
}

int main() 
{
    // Example input array
    vector<long long> arr = {12, 45, 7, 89, 23, 5, 66, 100};
    
    // Call the getMinMax function
    pair<long long, long long> result = getMinMax(arr);
    
    // Print the result
    cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;

    return 0;
}
