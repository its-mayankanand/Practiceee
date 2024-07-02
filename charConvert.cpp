#include<iostream>
using namespace std;

char Convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter character: "<<endl;
    cin>>name;
    
    char output = Convert(name);
    cout<<output<<endl;
}