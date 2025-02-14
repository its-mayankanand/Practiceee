#include<iostream>
using namespace std;

//Some questions:
// 1. reverse a string

// void reverse(string s,int start,int end,int n)
// {
//     while(start < end)
//     {
//         swap(s[start],s[end]);
//         start++;
//         end--;
//     }
//     cout<<s<<" ";
// }
// int main()
// {
//    string s = "rohit";
//    int size = 5;
//    int start = 0;
//    int end = s.size()-1;

//    reverse(s,start,end,size);

// }

//-----------------------------------------------------

//2. Print the size of string

// void findsize(string s , int size)
// {
//     while(s[size] != '\0')
//     {
//         size++;
//     }
//     cout<<size<<" ";
// }

// int main()
// {
//     string s = "mayank";
//     int size = 0;
    
//     findsize(s,size);
// }

//------------------------------------------

//3. Check palindrome or not
void checkPalindrome(string s,int start,int end,int n)
{
    while(start < end)
    {
        if(s[start] != s[end])
        {
            cout<<"Not a palindrome";
            return;
        }
        start++ , end--;
    }
    cout<<"It is a Palindrome";
}
int main()
{
    string s = "ullu";
    int size = 5;
    int start = 0;
    int end = s.size()-1;

    checkPalindrome(s,start,end,size);
}
