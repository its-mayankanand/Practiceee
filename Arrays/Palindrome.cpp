#include<iostream>
using namespace std;

bool isPalindrome(int x)
{
    long rev = 0;
    long original = x;

    while(x > 0) //since we skip for the negative part as it is understood
    {
        int digit = x % 10;
        rev = (rev*10) + digit;
        x = x / 10;
    }
    if(rev == original)
    {
        return true;
    }
    return false;
}

int main()
{
    int number;
    cout<<"Enter number to check: "<<endl;
    cin>>number;

    int output = isPalindrome(number);
    cout<<output<<endl;

    
}