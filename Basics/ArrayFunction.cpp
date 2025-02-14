#include<iostream>
using namespace std;

// Arrays and functions
/*
void printArray(int arr[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[5] = {2,4,6,8,10};
    int size = 5;

    printArray(arr , size);
}
*/
//------------------------------------------------
//Linear Search

//present  -> true
//absent   -> false

/*

bool linearSearch(int arr[] , int size , int target)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    int target = 10;

    bool ans = linearSearch(arr,size,target);

    if(ans==1)
    {
        cout<<"Target found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}

*/
//------------------------------------------------

// Count 0's and 1's in an array

/*
void countZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == 0)
        {
            zeroCount++;
        }
        if(arr[i] == 1)
        {
            oneCount++;
        }
    }

    cout<<"Zero count: "<<zeroCount<<endl;
    cout<<"One count: "<<oneCount<<endl;
}
int main()
{
    int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};

    //zero = 7
    //one = 8

    int size = 15;

    countZeroOne(arr,size);
}

*/
//-----------------------------------------------



