#include<iostream>
using namespace std;

int solveUsingRec(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return solveUsingRec(n-1)+solveUsingRec(n-2);
}
int main()
{
    int number;
    cout<<"Enter number:"<<endl;
    cin>>number;

    int result = solveUsingRec(number);
    cout<<result<<endl;
}


