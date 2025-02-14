#include<bits/stdc++.h>
using namespace std;

// write a code , to help your CEO for 
//finding all square shaped plots
//Input : 6 
// 64,16,38,81,50,100

int is_perfect_sqr(int arr[] , int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if( ceil((double)sqrt(arr[i])) == floor((double)sqrt(arr[i])) )
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[6] = {64,16,38,81,50,100};

    int ans = is_perfect_sqr(arr,6);

    cout<<ans<<endl;

    return 0;
}