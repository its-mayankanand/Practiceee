#include<iostream>
using namespace std;

bool checkEven (int n)
{
    if(n%2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    bool isEven = checkEven(n);

    if(isEven == 1)
    {
         cout<<n<<"is Even number.\n";
    }
    else
    {
        cout<<n<<"is Odd number.\n";
    }
} 