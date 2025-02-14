#include<iostream>
using namespace std;

//lowercase to upper case function
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char name ;
    cout<<"Enter lowercase character: "<<endl;
    cin>>name;

    //calling function
    cout<<convert(name)<<endl;
}