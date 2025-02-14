#include<iostream>
using namespace std;

//Perfect Sum problem 
//mtlb jitne bhi subset ka sum exact target or sum ke equal
//ho usko count kar lo and return karlo
// ex. . 2 , 3  , 4 subsets.
int subset(int arr[],int index, int sum,int n)
{
    if(index == n)
    {
        if(sum == 0)
        return 1;
        else
        return 0;
    }

    //not included and included
    return subset(arr,index+1,sum,n) + subset(arr,index+1,sum-arr[index],n);
}
int main()
{
   int arr[] = {2,5,6,1};
   int sum = 8;
   int index = 0;
   int size = 4;

   cout<<subset(arr,0,sum,size)<<endl;
}