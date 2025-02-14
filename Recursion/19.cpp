#include<iostream>
using namespace std;

//lowercase to uppercase
//peeche se start kar rhe hai


void lowerToUpper(string &str , int index)
{
    //base case
    if(index == -1)
    return;

    //processing
    str[index] = 'A' + str[index] - 'a';

    //recursive relation
    lowerToUpper(str , index-1);
}
int main()
{
   string str = "rohit";

   //function call
   lowerToUpper(str , 4);

   cout<<str<<endl;
   
}