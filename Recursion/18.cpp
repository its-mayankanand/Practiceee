#include<iostream>
using namespace std;

//because we have to change the string in it
//so we have to pass this as a reference
//Although ye void hai phir bbi reference se
//direct main wale str me change ho jyega


void rev(string &str, int start, int end)
{ 
    //base case
    if(start >= end)
    return;
    
    //processing
    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    
    //recursive relation   
    //void tha toh return likhna jaroori nhi tha
    rev(str, start+1 , end-1);


}
int main()
{
   string str = "rohit";
   
   //calling function
   rev(str,0,4);

   cout<<str;
}