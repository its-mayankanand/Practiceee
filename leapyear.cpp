#include<iostream>
using namespace std;

int isLeap(int N)
{
    if(N % 400 == 0)
        return 1;
    else if (N % 4 == 0 && N % 100 != 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cout<<"Enter year to check: "<<endl;
    cin>>n;

    int output = isLeap(n);
    cout<<output<<endl;
}