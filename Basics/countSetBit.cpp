#include<iostream>
using namespace std;

//Method 1 to count set bit of any given number.
/*
int countSetBit(int n)
{
    int count = 0;
    while(n > 0)
    {
        int bit = n % 2;
        if(bit == 1)
           count++;
        
        n = n/2;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    int setBitCount = countSetBit(n);

    cout<<setBitCount<<endl;

}
*/
//----------------------------------------------
//Method 2 using bits

int countSetBit(int n)
{
    int count = 0;
    while(n > 0)
    {
        int bit = (n & 1);
        if(bit == 1)
          count++;
        
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    int setBitCount = countSetBit(n);
    
    cout<<setBitCount<<endl;
}