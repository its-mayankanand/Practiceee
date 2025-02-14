#include<iostream>
using namespace std;

//count vowels
//isme ham peeche se check karna suru karege
//taki kam parameter me ho jaye
//aage se karte toh string ki length ko 
//pass karna parta
int countVowel(string str, int index)
{
    //base case
    if(index == -1)
    return 0;

    //vowel hoga
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' )
    return 1 + countVowel(str,index-1); //mtlb ye vowel hai toh +1 ab iske aage wale pe check karlo
    
    //nahi hoga
    else
    return countVowel(str,index-1);
}
int main()
{
    string str = "rohit";
    cout<<countVowel(str,4)<<endl;
}