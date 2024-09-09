#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

/*
int count(int n)
{
    int count = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }

    return count;
}
int main()
{
    int number = 7789;

    int result = count(number);
    cout<<result<<endl;
}
*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Count the number of digits in n which evenly divide n.
//Example : Input: n = 2446
//Output: 1
//Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.
/*
int evenlyDivides(int N)
{
    int num=N;
    int count=0;
    while(N>0)
    {
        int rem=N%10;
            
        if(rem!=0 && num%rem==0)
        {
            count++;
        }
        N=N/10;
    }
    return count;
}

int main()
{
    int number = 2446;

    int result = evenlyDivides(number);
    cout<<result<<endl;
}

*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Question is : Armstrong Number
/*
#include <iostream>
#include <cmath>
using namespace std;

void Armstrong(int n)
{
    int sum = 0;
    int duplicate = n;
    int count = 0;

    // Calculate the number of digits
    while (n > 0)
    {
        count++;
        n /= 10;
    }

    // Reset n to the original value
    n = duplicate;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, count);
        n /= 10;
    }

    // Check if the original number is equal to the calculated sum
    if (duplicate == sum)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }
}

int main()
{
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    Armstrong(number);
}

*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++
//print all divisors of a number
/*
void printDivisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int number;
    cout<<"enter the number: "<<endl;
    cin>>number;

    printDivisors(number);
}
*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
