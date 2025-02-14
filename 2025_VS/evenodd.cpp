//Check whether a given number is even or odd
#include<iostream>
using namespace std;

bool isEven(int n)
{
    return (n % 2 == 0);
}
int main()
{
    int n = 101;
    if(isEven(n))
    cout<<"true";
    else
    cout<<"false";

    return 0;
}