#include<iostream>
using namespace std;

//kitne subset mai number add karke bana skta hu
//target jitne number repetation is allowed 
//and in order

//Target Sum Repeat : 
//one number can be repeted 
//but in order not in reverse and all
int subsum (int arr[],int index,int n,int sum)
{
    //base case
    if(sum == 0)
    return 1;
    
    if(index==n || sum<0)
    return 0;


    //mai iss index wale ko use nhi krna chata + 
    //mai use karna chata use kar liya but index 
    //wahi pr rehne do usko doobara use karna chata
    //hu
    return subsum(arr,index+1,n,sum) + subsum(arr,index,n,sum-arr[index]);

}
int main()
{
    int arr[] = {2,3,4};
    int sum = 6;
    int index = 0;
    int size = 3;

    cout<<subsum(arr,index,size,sum)<<endl;


}

//will not work for if we have 0 in the array