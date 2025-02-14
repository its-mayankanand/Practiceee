#include<iostream>
using namespace std;

int count(int n)
{
    int count = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }

    return count;
}
int main()
{
    int number = 77899;

    int result = count(number);
    cout<<result<<endl;
}