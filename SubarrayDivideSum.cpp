#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Divide Array in Subarray so that both sides have equal sum

bool divide(vector<int> arr)
{
    int prefix = 0, totalSum = 0, n = arr.size();

    //Total Sum
    for(int i=0 ; i<n ; i++)
    {
        totalSum += arr[i];
    }

    for(int i=0; i<n; i++)
    {
        prefix = prefix + arr[i];
        
        int ans = totalSum - prefix;

        if(ans == prefix)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    vector<int> V(n);
    cout<<"Enter the element in array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>V[i];
    }

    cout<<divide(V);

}

