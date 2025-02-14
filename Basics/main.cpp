#include<iostream>
using namespace std;
int main()
{
    
    //print 1 to n.
    /*
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        cout<<i<<endl;
        i=i+1;
    }
    */
    
    
   //-----------------------------------------

   //sum from 1 to N
   /*
   int n;
   cout<<"enter value of n:"<<endl;
   cin>>n;

   int sum=0;
   int i=1;
   while(i<=n)
   {
        sum=sum+i;
        i = i+1;
   }
   cout<<"value of sum is "<<sum<<endl;
   */
   
  //--------------------------------------------
  /*
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;

  cout<<"Printing count from 1 to n:"<<endl;
  for(int i=1;i<=n;i++)
  {
    cout<<i<<endl;
  }
  */
 //-----------------------------------------------
  /*
 int n;
 cout<<"enter value of n:"<<endl;
 cin>>n;

 int sum = 0;
 for(int i=1;i<=n;i++)
 {
     sum = sum + i;

 }
 cout<<sum<<endl;
 */
//----------------------------------------------
//Fibonacci series
// 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 ........
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int a  = 0 ;
int b = 1;
cout<<a<<" "<<b<<" ";

for(int i = 1;i<=n;i++)
{
    int nextNumber = a + b;
    cout<<nextNumber<<" ";

    a = b;
    b = nextNumber;

}
*/
//-------------------------------------------------
/*
int n;
cout<<"enter value of n:"<<endl;
cin>>n;

bool isPrime = 1;

for(int i =2 ;i<n;i++)
{
  //rem = 0 , not a prime
  if(n%i == 0)
  {
    cout<<"Not a Prime Number"<<endl;
    isPrime = 0;
    break;
  }
}
if(isPrime == 0)
{
  cout<<"Not a prime Number"<<endl;
}
else
{
  cout<<"is a Prime Number"<<endl;
}
*/
//-----------------------------------------
/*

for(int i=0;i<4;i++)
{
  for(int j=0;j<4;j++)
  {
    cout<<"*"<<" ";
  }
  cout<<endl;
}
*/


//----------------------------------------------
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

for(int i = n;i>=1;i--)
{
  cout<<i<<endl;
}
*/
//------------------------------------
//factorial of a number
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int fact = 1;
while(n>=1)
{
  fact = n * fact;
  n--;
}
cout<<fact<<endl;
*/
//-------------------------------------------
int n;
cout<<"enter value of n"<<endl;
cin>>n;

int i = 1;
while(i<=n)
{
  int j=1;
  while(j<=n)
  {
    cout<<"*";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}






}





