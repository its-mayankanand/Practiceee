#include<iostream>
using namespace std;

int reverseNum(int N)
{
    int ans = 0 , rem ;
    while(N)
    {
        rem = N % 10;
        N /= 10;
        ans = ans * 10 + rem;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number to reverse: "<<endl;
    cin>>n;

    int output = reverseNum(n);
    cout<<output<<endl;
}