#include <iostream>
#include <string>
using namespace std;

//1st Approach
/*
int lastIndex(string s, char target) 
{
    // Use rfind to get the last index of the target character
    int index = s.rfind(target);

    // Return -1 if the character is not found
    return index;
}

int main() 
{
    string s = "00001";
    char target = '1';

    int result = lastIndex(s, target);

    if (result != -1) 
    {
        cout << "Last index of '" << target << "' is: " << result << endl;
    } 
    else 
    {
        cout << "Character '" << target << "' not found." << endl;
    }
    return 0;
}
*/

//--------------------------------------------------------------------------------------
//2nd Approach
int lastIndex(string s) 
{
    for(int i = s.length()-1; i >= 0; i--)
    {
        if(s[i] == '1')
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int index = lastIndex(input);
    
    if(index != -1) 
    {
        cout << "The last occurrence of '1' is at index: " << index << endl;
    } 
    else 
    {
        cout << "'1' is not present in the string." << endl;
    }

    return 0;
}
