//Method 1
#include<iostream>
using namespace std;

void Rotate(int arr[] , int N)
{
    cout << "Array before rotation: ";
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int last = arr[N-1];
    for(int i=N-2; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = last;
    

    cout << "Array after rotation: ";
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    Rotate(arr,n);
}