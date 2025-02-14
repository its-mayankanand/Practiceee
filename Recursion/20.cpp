#include<iostream>
using namespace std;

//linear search
// bool linearsearch(int arr[] , int x ,int index,int n)
// {
//     //base case
//     if(index == n)
//     return 0;

//     //processing
//     if(arr[index] == x)
//     return 1;
    
//     //recursive relation
//     return linearsearch(arr,x,index+1,n);
// }
// int main()
// {
//     int arr[] = {2,3,6,7,1,5};
//     int x = 17;
//     int size = 6;

//     int ans = linearsearch(arr,x,0,size);
//     cout<<ans<<endl;
// }

//-----------------------------------------

//Binary search
bool BinarySearch(int arr[] , int start , int end , int X)
{
    //base case
    if(start > end)
    return 0;

    int mid = start + (end - start) / 2;

    if(arr[mid] == X)
    return 1;

    else if(arr[mid] < X)
    return BinarySearch(arr,mid+1,end,X);

    else
    return BinarySearch(arr,start,mid-1,X);
}
int main()
{
    int arr[] = {2,4,6,8,10,12};
    int X = 17;
    //function call
    int ans = BinarySearch(arr,0,5,X);
    cout<<ans<<endl;
}