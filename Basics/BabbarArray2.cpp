/*
#include<iostream>
using namespace std;

// Question is find Unique element in an array
//using XOR 
//Xor same value ---> 0
//Xor different value ----> 1

int getUnique(int arr[] , int n)
{
    int ans = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        ans = ans^arr[i];
    }
    return ans;

}
int main()
{
    int arr[] = {2,10,11,10,2,13,15,13,15};

    int n = 9;

    int finalAns = getUnique(arr,n);

    cout<<"Final answer is: "<<finalAns<<endl;
}
*/
// In Xor truth table 0 ko kisi ke sath bhi xor
// wahi value aati hai
//------------------------------------------------

// Question : given no of elements in array
// print all pairs.
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30};
    int n = 3;

    for(int i = 0; i<n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
*/
//------------------------------------------------
/*
// given array in input 
// print all its triplets
#include<iostream>
using namespace std;
int main()
{
   int arr[] = {1,2,3,4};
   int n = 4;

   for(int i = 0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
        }
    }
   } 
}
*/
//------------------------------------------------
// Question sort all 0's and 1's
//Logic : count all 0 & 1 and then place 0 and 1
/*
#include<iostream>
using namespace std;
void sortZeroOne (int arr[],int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    //stepA : count 0 and 1
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
           zeroCount++ ;
        if(arr[i] == 1)
           oneCount++ ;
    }
    //step B: place all zeroes first
    
    int i;
    for( i = 0;i<zeroCount;i++)
    {
        arr[i] = 0;
    }

    for(int j = i; j<n; j++)
    {
        arr[j] = 1;
    }
    

    // Easy way:-----
    int index = 0;
    while(zeroCount--)  // 8 times
    {
        arr[index] = 0;  
        index++ ;
    }
    while(oneCount--)  // 6 times
    {
        arr[index] = 1;
        index++ ;
    }


}
int main()
{
    int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};

    int n = 14;

    sortZeroOne(arr,n);

    //printing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
//------------------------------------------------
//Question SHIFT array element by 1 :

#include<iostream>
using namespace std;
void shiftArray(int arr[],int n)
{
    //step 1:
    int temp = arr[n-1];

    //step 2:
    // shift -> arr[i] = arr[i-1]
    for(int i = n-1 ; i>=1;i--)
    {
        arr[i] = arr[i-1]; 
    }

    //step 3:
    arr[0] = temp;
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6;

    shiftArray(arr,n);

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}









