#include<iostream>
using namespace std;
//printing an array using function

void Fun(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    Fun(arr,5);
}

//dono jagah array ka and size ka 
//name alag alag dale hai
//asal me function me jo a[] hai  wo pointer 
//hota hai size print karke pata kar skte hai


