#include<iostream>
using namespace std;

//Recursion on arrays
//jab reverse order me print krna ho toh
//recursive call ko print krne se pehle likh do
/*
void print(int arr[], int index , int n)
{
    if(index == n) //kyunki n se ek kam tak jyega because 0 se start ho rha hai
    return ;
    
    //ek step processing
    cout<<arr[index]<<" ";
    
    //recursive call
    print(arr, index+1, n);
}
int main()
{
    int arr[] = {3,4,1,2,8};
    //array index , size
    print(arr,0,5);
}

*/

//--------------------------------------------
//Question : jab index peeche se denge
//isme 2 argument me ho jyega n ka 
//jaroorat nhi hai kyunki hmko mallom hai
//ki rukna kab hai

//agar isi me hmko 3,4,1,2,8 print karana 
//hai toh recursive call ko upar kardo

void print(int arr[] , int index)
{
    if(index == -1)
    {
        return;
    }

    //processing
    cout<<arr[index]<<" ";
    //recursive call
    print(arr,index-1);
}
int main()
{
    int arr[] = {3,4,1,2,8};
    print(arr,4); //index start ho rha hai 4 se
}


