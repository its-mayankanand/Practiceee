#include<iostream>
#include<cmath>
using namespace std;



int CountDigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit)
{
    int n = num , ans = 0 , rem;
    while(n)
    {
       rem = n % 10;
       n /= 10;

       ans = ans + pow(rem,digit);
    }
    if(ans == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    int digit = CountDigit(num);

    cout<<Armstrong(num,digit);
}

//In online c++ compiler the same code is giving 1 that is true for 153 but here it is showing 
//0 that is false why i dont know but this code is correct .
