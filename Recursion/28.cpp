#include<iostream>
using namespace std;

//Target sum
//its any subset can be the equal to the target value

bool find(int arr[],int index,int n, int target)
{ 
    //base case
    if(target == 0)
    return 1;

    if(index == n || target < 0)
    return 0;

     
    // include or not include
    //or time complexity kam karega
    return find(arr,index+1,n,target) || find(arr,index+1,n, target - arr[index]);
}
int main()
{
   int arr[] = {2,4,1,8,7};
   int index = 0;
   int size = 5;
   int target = 13;

   cout<<find(arr,index,size,target)<<endl;
   //or find(arr,0,5,target);
}

//Time complexity O(2^n)
//Space complexity 