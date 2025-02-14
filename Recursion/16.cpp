#include<iostream>
using namespace std;

bool checkPalin(string str, int start, int end )
{
    //base case
    if(start >= end)
    return 1;

    //not matched
    if(str[start] != str[end])
    return 0;

    //matched
    else
    return checkPalin(str, start+1, end-1);
}
int main()
{
    //check palindrome

    string str = "namon";
    
    //passed string , start , end
    cout<<checkPalin(str,0,4);
}