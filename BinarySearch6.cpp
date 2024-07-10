#include<iostream>
using namespace std;

//SquareRoot (x) type question

int mySqrt(int x) 
{
    int s = 0;
    int e = x;
    long long int mid =  s + (e-s) / 2;
    int ans = -1;

    while(s <= e)
    {
      // kya mid hi toh answer nahi
      if(mid*mid == x)
      {
        ans = mid;
        break;
        //or 
        //return mid;
      }

      else if(mid*mid < x)
      {
        //ans store since decimal value mila ke ans bana skta hai toh usko store karke rakh lene ka
        // right me jao
        ans = mid;
        s = mid + 1;
      }

      else
      {
        // left me jana hai
        e = mid - 1;
      }

      mid =  s + (e-s) / 2;   // mid bahar me nikale hai toh update karna jaroori hai
    }

    return ans;
}
int main()
{
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    int result = mySqrt(number);
    cout<<result<<endl;
}