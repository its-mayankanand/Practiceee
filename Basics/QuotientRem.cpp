#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;

    cout<<"enter dividend: ";
    cin>>dividend;

    cout<<"enter divisor: ";
    cin>>divisor;

    quotient = dividend/divisor;
    remainder = dividend % divisor;

    cout<<"Quotient = "<<quotient<<endl;
    cout<<"Remanider = "<<remainder;
}