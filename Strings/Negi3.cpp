#include <iostream>
#include <vector>
using namespace std;

//Maximum occuring character

char getMaxOccuringChar(string str) 
{
    // Create an array to store the frequency of each character (assuming ASCII set)
    vector<int> freq(256, 0);

    // Iterate through the string and update the frequency of each character
    for (int i = 0; i < str.length(); i++) 
    {
        freq[(int)str[i]]++;
    }

    // Find the character with the maximum frequency
    int maxFreq = 0;
    char result = ' ';
    for (int i = 0; i < str.length(); i++) 
    {
        if (freq[(int)str[i]] > maxFreq) 
        {
            maxFreq = freq[(int)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() 
{
    string str = "sample string for testing";
    cout << "Max occurring character: " << getMaxOccuringChar(str) << endl;
    return 0;
}
