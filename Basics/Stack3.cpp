#include<iostream>
#include<stack>
using namespace std;

// 1. When we have to get reverse ordering 
// then we can use stack
// stack ka mtlb recursion
// recursion ka mtlb stack

int main()
{
    string str = "hellojee";
    stack<char> st;

    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}