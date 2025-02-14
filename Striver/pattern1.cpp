#include<iostream>
using namespace std;

int main()
{

    //outer loop ---> row observe
    //inner loop --->column observe
     
    for(int row=0;row<3;row=row+1)
    {
      for(int col=0 ; col<5 ; col=col+1)
      {
        cout<<"* ";
      }
      cout<<endl;
    }
}

// * * * * *
// * * * * *
// * * * * *  ouput is this only if want to print like square 
//then do row and col val same