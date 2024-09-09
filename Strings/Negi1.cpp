#include<iostream>
using namespace std;

//Reverse string
//have done this with 2 pointer concept

string reverseWord(string str)
{
    int s = 0;
    int e = str.size()-1;
        
    while(s<=e)
    {
        swap(str[s++] , str[e--]);
    }
        
    return str;
}

int main()
{
    string s = "mayank";

    //calling and storing it in the variable
    string result = reverseWord(s);
    cout<<result<<endl;

}