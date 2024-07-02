#include<iostream>
using namespace std;

int sum(int x , int z)
{
    int c = x + z;
    return c;
}

int main()
{
    int a , b;
    cout<<"Enter value of a and b: "<<endl;
    cin>>a>>b;

    int output = sum(a,b);
    cout<<output<<endl;
}