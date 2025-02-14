#include<iostream>
#include<vector>
using namespace std;



//merge sort 
void merge(int arr[], int start, int mid,int end)
{
    vector<int> temp(end-start +1);

    int left = start;  //ye first jo tuta
    int right = mid+1; //ye second jo tuta
    int index = 0;     //ye temp array ka start index hai

    while(left<=mid && right<=end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++ , left++;
        }
        else
        {
            temp[index] = arr[right];
            index++ , right++;
        }
    }

    //left me element baaki reh gya
    while(left <= mid)
    {
        temp[index] = arr[left];
        index++ , left++;
    }

    //right me element baaki reh gya
    while(right <= end)
    {
        temp[index] = arr[right];
        index++ , right++;
    }

    //now put these values from temp array to 
    //original array
    index = 0;
    while(start <= end)
    {
        arr[start] = temp[index];
        start++ , index++;
    }

}
void mergesort(int arr[] , int start , int end)
{
    if(start == end)
    return;

    int mid = start + (end - start) / 2;

    //left side divide kar rhe hai
    mergesort(arr,start,mid);

    //right side divide kar rhe hai
    mergesort(arr,mid+1,end); 

    //ab isko merge kardo
    merge(arr,start,mid,end);
}
int main()
{
    int arr[] = {6,3,1,2,8,9,10,7,3,10};
    mergesort(arr,0,9);

    //final printing checking 
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
}


//------------------------------------------------------------------------