#include<iostream>
using namespace std;

bool areRotations(string s1,string s2)
{
    if(s1.length() != s2.length())
    return false;

    // Concatenate s1 with itself
    s1 = s1 + s1;

    // Check if s2 is a substring of the concatenated string
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
    string s1 = "geeksforgeeks", s2 = "forgeeksgeeks";

    if(areRotations(s1, s2))
    cout << "The strings are rotations of each other." << endl;

    else
    cout << "The strings are not rotations of each other." << endl;

}