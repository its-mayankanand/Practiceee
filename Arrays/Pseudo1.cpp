#include<iostream>
using namespace std;

void my_recursive_function(int n)
{
    if(n==0)
    return;

    cout<<n<<endl;

    my_recursive_function(n-1);
}
int main()
{
    my_recursive_function(10);
    return 0;
}