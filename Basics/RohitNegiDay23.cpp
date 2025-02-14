// Arrays Questions
// Reverse of the array
/*
#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5};
    int size = 5;
    int start = 0 , end = size - 1 ;

    while (start < end)
    {
        swap (arr[start] ,arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }


}
*/
//------------------------------------------------
//Fibonacci Series
/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int arr[1000];

    //first = 0
    //second = 1;

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2;i<=n-1;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout<<arr[n-1];

}
*/
//------------------------------------------------


  

