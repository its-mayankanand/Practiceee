/*
#include<iostream>
#include<limits.h> 
using namespace std;

//limits.h includes INT_MIN and INT_MAX 

int main()
{
    //it equals -2 ki power 31
    cout<<INT_MIN<<endl; 
    //it equals 2 to the powe 31 - 1
    cout<<INT_MAX<<endl;


}
*/

//------------------------------------------------
/*
#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumInArray(int arr[],int size)
{
    int minAns = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}
int main()
{
    int arr[] = {10,8,31,4,3,1,51};
    int size = 7;

    int minimum = findMinimumInArray(arr,size);
    cout<<"Minimum number is:"<<minimum<<endl;
}
*/
//-----------------------------------------------
/*
#include<iostream>
#include<limits.h>
using namespace std;

int findMaximumInArray(int arr[],int size)
{
    int maxAns = INT_MIN;

    for(int i=0 ; i<size; i++)
    {
        if(arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main()
{
    int arr[] = {12,1,19,100,67};
    int size = 5;

    int maximum = findMaximumInArray(arr,size);
    cout<<"Maximum in Array is: "<<maximum<<endl;
}

*/
//------------------------------------------------
/*
//Question : Reverse an array
//we will use swapping method and try
//to work for both even size and odd size a
#include<iostream>
using namespace std;

void reverseArray(int arr[] , int size)
{
    int left = 0;
    int right = size - 1;
    while(left <= right)
    {
        swap(arr[left] , arr[right]);

        left++;

        right--;
    }
    //priting the reversed array
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter value of each index array: "<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr,size);
}

*/
//------------------------------------------------
/*
//Reversing an array without taking array as
// input and size as input

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int left = 0;
    int right = size - 1;
    while(left <= right)
    {
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
    //printing the reversed array
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7;
    reverseArray(arr,size);
}
*/
//------------------------------------------------

// reversing an array using for loop
//all the things will remain same 
//except the foor loop
/*
for(int left=0 , right=size-1; left<=right ; left++,right--)
*/
//------------------------------------------------
/*
//Question : Extreme print in an array
//Input : {10,20,30,40,50,60}
//Output: {10,60,20,50,30,40} //extreme print

#include<iostream>
using namespace std;

void extremePrint(int arr[] , int size)
{
    int left = 0;
    int right = size - 1;
    while(left <= right)
    {
        if(left == right)
        {
            cout<<arr[left]<<endl; //ek bar print
        }
        else
        {
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
        }
        left++;
        right--;
    }
}
int main()
{
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    extremePrint(arr,size);
}

//this will give right answer in even number 
//of elements that is (<=).
//when it may have odd number of elements
//then the last element will get printed 
//two times because left and right lie on the 
//same elements.
//and we remove (=) sign from there then
//it will not print the last element.
//so have to use if and else there

*/
//------------------------------------------------









