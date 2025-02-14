#include<iostream>
using namespace std;

// The function def differenceofSum(n. m) 
// accepts two integers n, m as arguments 
// Find the sum of all numbers in range from 1 to m(both inclusive) 
// that are not divisible by n. 
// Return difference between sum of integers not 
// divisible by n with sum of numbers divisible by n.

int differenceofSum(int n, int m)
{
    int i , sum1 = 0 , sum2 = 0;

    for(int i=1; i<=m; i++)
    {
        if(i % n == 0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }
    return sum2 - sum1;
}
int main()
{
    int n , m;
    cin>>n>>m;

    int result;
    result = differenceofSum(n,m);
    cout<<result;

    return 0;
}