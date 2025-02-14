#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr)
{
    int n = arr.size();

    for(int i=n-1; i>0 ; i--)
    {
        swap(arr[i] , arr[i-1]);
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,6};
    int n = arr.size();
    //function calling
    rotate(arr);

    cout<<"Array after rotating: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}