#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr)
{
    int n = arr.size();

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
        
    //stepA : count 0 and 1
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        zeroCount++ ;
        if(arr[i] == 1)
        oneCount++ ;
        if(arr[i] == 2)
        twoCount++;
    }
    //place all zeroes first and then place ones
    int index = 0;
    while(zeroCount--)  
    {
        arr[index] = 0;  
        index++ ;
    }
    while(oneCount--)  
    {
        arr[index] = 1;
        index++ ;
    }
    while(twoCount--)
    {
        arr[index] = 2;
        index++;
    }

    //array after sorting is
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr = { 2,1,2,1,0,0,1,2,1,1,0};
    
    //function calling 
    sort012(arr);
}