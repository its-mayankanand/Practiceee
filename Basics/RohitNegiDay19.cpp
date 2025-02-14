#include<iostream>
#include<math.h>
using namespace std;

// convert character name V.V.I(small to capital)
// Question 1:
/*
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

    cout<<Convert(name);
}
*/
//------------------------------------------------

//Question 2 : Armstrong number
//jitne digit honge utne uspe power honge and add 
//it and check if it equals to the original one 
//or not
// if number is 2 3 then total two digit
//then do 2 ^ 2 and 3 ^ 2 = 13 that is not equal
//to 23 hence not armstrong
/*
int countDigit(int n)
{
    int count = 0;
    while(n) // or while(n)
    {
        count++;
        n = n/10;
    }
    return count;
}
bool Armstrong(int num,int digit)
{
    int n = num , ans = 0 , rem;
    while(n)
    {
        rem = n % 10;
        n = n / 10;

        ans = ans + pow(rem , digit);

    }
    if(ans == num)
    return 1;
    else
    return 0;


}
int main()
{
    int num;
    cin>>num;

    int digit = countDigit(num);
    //different function
    cout<<Armstrong(num,digit);
}
*/
//153 is not giving as palindrome why i dont know


