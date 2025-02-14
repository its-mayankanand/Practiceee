#include<bits/stdc++.h>
using namespace std;

bool areRotations(string &s1, string &s2) 
{
    if(s1.size() != s2.size())
    {
        return false;
    }
        
    s1 = s1 + s1;
        
    if(s1.find(s2) != -1)
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
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    if (areRotations(s1, s2)) 
    {
        cout << "The strings are rotations of each other." << endl;
    } 
    else 
    {
        cout << "The strings are not rotations of each other." << endl;
    }

    return 0;
}

