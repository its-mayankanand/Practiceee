#include<iostream>
using namespace std;

int createNumberUsingDigits(int numberOfDigits)
{
    int num = 0;
    for(int i=0;i<numberOfDigits;i++)
    {
        cout<<"Enter digit:"<<endl;

        int digit;
        cin>>digit;

        num = num * 10 + digit;


    }
    return num;
}

int main()
{
    int numberOfDigits;
    cout<<"Enter number of digits you want to enter:"<<endl;
    cin>>numberOfDigits;

    int num = createNumberUsingDigits(numberOfDigits);

    cout<<num<<endl;
}