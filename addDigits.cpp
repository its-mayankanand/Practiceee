#include<iostream>
using namespace std;

//Add digits
int addDigits(int num)
{
   while(num > 9)
   {
    int ans = 0 , rem;
    while(num != 0)
    {
      rem = num % 10;
      num /= 10;
      ans += rem;
    }
    num = ans;
   }
}

int main()
{
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    int output = addDigits(num);
    cout<<output<<endl;
}