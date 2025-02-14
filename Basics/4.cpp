#include<iostream>
using namespace std;

//Pass by reference me void bhi lege toh change ho
//jyega kyunki wo same ko point karta hai

void Incr(int &n)
{
    n++;
}
int main()
{
   int a = 10;

   Incr(a);
   
   cout<<a<<endl;
}