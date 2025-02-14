#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 5;

    cout<<"Enter value of Array: "<<endl;
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter value you want to search: "<<endl;
    cin>>target;

    
    bool flag = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout<<"target found"<<endl;
    }
    else
    {
        cout<<"target not found"<<endl;
    }
    
}
