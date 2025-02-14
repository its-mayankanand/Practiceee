#include<iostream>
using namespace std;

string reverseString(string &s) 
{
    int start = 0;
    int end = s.size()-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
        
    return s;
}

int main()
{
    // string str = "hello";
    // cout << "Original: " << str << endl;
    // cout << "Reversed: " << reverseString(str) << endl;
    // return 0;

    
    
    string str;
// Taking input from the user
    cout << "Enter a string to reverse: ";
    getline(cin, str); // Read the entire line of input (to include spaces)

    // Reverse the string and display the result
    cout << "Reversed string: " << reverseString(str) << endl;

    return 0;
}