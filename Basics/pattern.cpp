#include<iostream>
using namespace std;

int main()
{
     //outer loop ---> row observe
     //inner loop --->column observe
     /*
     for(int row=0;row<3;row=row+1)
     {
        for(int col=0 ; col<5 ; col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
     */
    //------------------------------------------------
    /*
    int n;
    cin>>n;
    for(int row=0;row<4;row=row+1)
    {
        for(int col=0;col<4;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    */
   //----------------------------------------------
   /*

    int rowcount , colcount;
    cin>>rowcount;
    cin>>colcount;


    for(int row=0;row<rowcount;row=row+1)
    {
        //first row or last row --->print 5*
        if(row==0 || row==rowcount-1)
        {
            for(int col=0;col<colcount;col++)
            {
                cout<<"*";
            }
        }
        else
        //remaining middle row
        {
            //first star
            cout << "*";
            //3 spaces
            for(int col=0 ; col<colcount-2 ; col = col+1)
            {
                cout<<" ";
            }
            //last star
            cout<< "*";
        }
        cout<<endl;
    }
    */
    

    //---------------------------------------------
    /*
    int n;
    cin>>n;
    for(int row = 0; row < n; row = row+1 )
    {
        for(int col=0; col<row+1; col = col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    */
   //---------------------------------------------
   /*
   int n;
   cin>>n;
   for(int row =0; row<n; row = row+1)
   {
        for(int col = 0; col < n-row; col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
   }
   */

   //----------------------------------------------
   /*

   int n;
   cout<<"Enter value of n:"<<endl;
   cin>>n;

   for(int row =0 ; row < n; row = row+1)
   {
        for(int col=0;col<row+1;col=col+1)
        {
            cout<<col+1;

        }
        cout<<endl;
   }
   */

  //---------------------------------------------------
  //Pattern printing using while loops and all
  //Question 1:
  /*
  ****
  ****
  ****
  ****
  */
  /*
  int n;
  cout<<"Enter value of n:"<<endl;
  cin>>n;

  int i=1;
  while(i<=n)
  {
    int j=1;
    while(j<=n)
    {
        cout<<"* ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
 //--------------------------------------------
 /*
 int n;
 cout<<"Enter value of n"<<endl;
 cin>>n;

 int i=1;
 while(i<=n)         //1111
 {                   //2222
    int j=1;         //3333
    while(j<=n)      //4444
    {
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
 }
 */
//-----------------------------------------------
/*
int n;
cout<<"enter value of n:"<<endl;
cin>>n;

int i=1;
while(i<=n)
{
    int j=1;           //123
    while(j<=n)        //123
    {                  //123
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//------------------------------------------------
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n)            //4321
    {                      //4321
        cout<<n-j+1;       //4321
        j=j+1;             //4321
    }
    cout<<endl;
    i=i+1;
}
*/
//-----------------------------------------------
//123
//456
//789
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int count = 1;
int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//------------------------------------------------
//*
//**
//***
//****
//star count = row number
/*
int n;
cout<<"enter value of n:"<<endl;
cin>>n;

int row = 1;
while(row<=n)
{
   int col = 1;
   while(col<=row)
   {
    cout<<"*";
    col = col+1;

   } 
   cout<<endl;
   row = row + 1;
}
*/
//-----------------------------------------------
/*
int n;
cout<<"enter value of n:"<<endl;
cin>>n;

int row = 1;               //1
while(row<=n)              //22
{                          //333
   int col = 1;            //4444
   while(col<=row)         //55555
   {
    cout<<row;     // row number that is i
    col = col+1;

   } 
   cout<<endl;
   row = row + 1;
}
*/
//------------------------------------------------
/*
int n;                                   //1
cout<<"enter value of n:"<<endl;         //23
cin>>n;                                  //456
                                         //78910
int row = 1;  
int count = 1;             
while(row<=n)              
{                          
   int col = 1;        
   while(col<=row)    
   {
    cout<<count;
    count = count + 1;
    col = col+1;

   } 
   cout<<endl;
   row = row + 1;
}
*/
//------------------------------------------------

//1
//2 3
//3 4 5
//4 5 6 7

//Method 1 by storing row number in a variable.
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int row = 1;
while(row<=n)
{
    int col=1;
    int value = row;
    while(col<=row)
    {
        cout<<value;
        value = value + 1;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}

*/
//------------------------------------------------
//1
//2 1
//3 2 1
//4 3 2 1
/*
int n;
cin>>n;

int row = 1;
while(row<=n)
{
    int col = 1;
    while(col <= row)
    {
        cout<<(row-col+1)<<" ";   // i-j+1
        col = col + 1;

    }
    cout<<endl;
    row = row + 1;

}
*/
//------------------------------------------------

//A A A
//B B B
//C C C
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int row = 1;
while(row<=n)
{
    int col  = 1;
    while(col<=n)
    {
        char ch = 'A' + row - 1;   // A + i - 1
        cout << ch <<" "; 
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}
*/
//-----------------------------------------------
//A B C
//A B C
//A B C
//row is denoted by i and col is denoted by j..
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int row = 1;
while(row<=n)
{
    int col = 1;
    while(col<=n)
    {
        char ch = 'A' + col - 1;
        cout << ch << " ";
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}
*/
//------------------------------------------------
//A B C
//D E F
//G H I
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

char count = 'A';
int i=1;      // i replaced by row 
while(i<=n)
{
    int j=1;  // j replaced by col.
    while(j<=n)
    {
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//------------------------------------------------
//A B C
//B C D
//C D E
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        char ch = 'A' + i + j - 2;   //on adding both side 'A' - 1 
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//------------------------------------------------
//A
//B B
//C C C
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int row = 1;
while(row<=n)
{
    int col = 1;
    while(col<=row)
    {
        char ch = ('A' + row - 1);
        cout << ch;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;
}
*/
//-----------------------------------------------
/*
for(int i=0;i<3;i=i+1)
{
    cout<<endl<<"Outer Loop"<<i<<endl;

    for(int j=0;j<3;j=j+1)
    {
        cout<<"inner loop"<<j<<endl<<endl;
    }
}
*/
//------------------------------------------------
//table of 19
/*
for(int i=1;i<=10;i=i+1)
{
    cout<<19*i<<endl;
}
*/
//---------------------------------------------
//square pattern
/*
for(int i=0;i<4;i=i+1)
{
    for(int j=0;j<4;j=j+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
*/
//----------------------------------------------
//rectangle pattern
/*
for(int i=0;i<3;i=i+1)
{
    for(int j=0;j<5;j=j+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
*/
//-----------------------------------------------
//print all even number between 100.
/*
for(int i=1;i<=100;i++)
{
    if(i%2==0)
    {
        cout<<i<<endl;
    }
}
*/
//-----------------------------------------------
// * * * * * *
// *         *
// *         *
// * * * * * *
//hollow rectangle
/*

for(int row=0;row<5;row=row+1)
{
    for(int col=0;col<5;col=col+1)
    {
        if(row == 0 || row==4)
        {
            cout<<"* ";
        }
        else
        {
           if(col == 0 || col == 4)
           {
            cout<<"* ";   
           } 
           else
           {
            cout << "  ";
           }
        }
    }
    cout<<endl;
}
*/
//----------------------------------------------- 
//half pyramid   //you can better understand with the dry run process
/*
for(int i=0;i<5;i++)
{
    for(int j=0;j<i+1;j++) 
    {
        cout<<"*";
    }
    cout<<endl;
}
*/
//----------------------------------------------
//half pyramid printing
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

int i = 1;
while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//------------------------------------------------
//Inverted half pyramid
// * * * * *
// * * * *
// * * *
// * * 
// *
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;
for(int row = 0; row < n; row = row + 1)
{
    for(int col = 0; col < n - row ; col = col + 1) //
    {
        cout<<"* ";
    }
    cout<<endl; 
}
//col = n -  row bar each line me print hoga
*/
//------------------------------------------------
//  Numeric Half Pyramid
/*
int n;
cout<<"Enter value of n:"<<endl;
cin>>n;

for(int row=0; row<n; row=row+1)
{
    for(int col=0; col<row+1; col=col+1)
    {
        cout<<  col+1 <<" "; 
    }
    cout<<endl;
}
*/

//------------------------------------------------
//Numeric inverted half pyramid
/*
int n;
cin>>n;
for(int row=0;row<n;row=row+1)
{
    for(int col=0;col<n-row;col=col+1)
    {
        cout<<col+1<<" ";
    }
    cout<<endl;  
}
*/
//----------------------------------------------
//output based question
/*
int n;
if(cin>>n)
{
    cout<<"Love Babbar";
}
*/
//output Love Babbar after giving any value
//----------------------------------------------
/*
int n=10;
if(cout<<n)
{
    cout<<"Love Babbar";
}
*/

//output: 10Love Babbar
//----------------------------------------------
/*
int n;
cin>>n;
if(cout<<n)
{
    cout<<"Love Babbar";
}
*/

//output here it will ask for input and then 
//print that value along with Love Babbar
//----------------------------------------------
//Full Pyramid
//     *
//   * * *
// * * * * *
/*
int n;
cin>>n;

for(int row = 0; row<n;row = row +1)
{
    //space
    for(int col=0;col<n-row-1;col=col+1)
    {
        cout<<" ";
    }

    //stars
    for(int col=0;col<row+1;col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
*/
//-----------------------------------------------
//Inverted full pyramid
// * * * * 
//  * * *
//   * *
//    *
/*
int n;
cin>>n;

for(int row = 0; row<n; row = row+1)
{
    //space 
    for(int col=0; col<row; col=col+1)
    {
        cout<<" ";
    }
    //stars
    for(int col=0; col<n-row;col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
*/
//the rule is that write rows number and 
//then write how many spaces and stars is priting
//in each line and then find relation between them 
//using a formulae that is hit and trial.
//------------------------------------------------
//diamond pattern 
//        *
//       * *
//      * * * 
//     * * * *
//     * * * *
//      * * *
//       * *
//        *
/*
int num;
cin>>num;
int n = num/2; 

//jitna n input le utna hi row banna chaiye
//but before doing this num/2     n ke double rows
//ban rhe the

for(int row = 0; row<n;row = row +1)
{
    //space
    for(int col=0;col<n-row-1;col=col+1)
    {
        cout<<" ";
    }

    //stars
    for(int col=0;col<row+1;col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}

for(int row = 0; row<n; row = row+1)
{
    //space 
    for(int col=0; col<row; col=col+1)
    {
        cout<<" ";
    }
    //stars
    for(int col=0; col<n-row;col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}

*/
//------------------------------------------------

//Hollow pyramid
//      *
//    *   *
//  *       *
//*           *
/*
int n;
cin>>n;

for(int row = 0; row<n;row = row +1)
{
    //space
    for(int col=0;col<n-row-1;col=col+1)
    {
        cout<<" ";
    }

    //stars
    for(int col=0;col<row+1;col=col+1)
    {
        //print star for 1st and last column
        if(col == 0 || col == row + 1 - 1) //row + 1 - 1
        {
            cout<<"* ";
        }
        else
        {
            //for every column between 1st and 
            //last column, print space.
            cout<<"  ";  
        }
    }
    cout<<endl;
}
*/
//-----------------------------------------------
//      *           *
//        *        *
//          *    *
//             *
//take inverted full pyramid code and do some 
//changes in it.
/*

int n;
cin>>n;

for(int row = 0; row<n; row = row+1)
{
    //space 
    for(int col=0; col<row; col=col+1)
    {
        cout<<" ";
    }
    //stars
    int totalCol = n-row;
    for(int col=0; col<totalCol;col=col+1)
    {
        //if first or last col
        if(col==0 || col==totalCol-1)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
}
*/
//-----------------------------------------------

//hollow diamond
/*
int num;
cin>>num;
int n = num/2;

for(int row = 0; row<n;row = row +1)
{
    //space
    for(int col=0;col<n-row-1;col=col+1)
    {
        cout<<" ";
    }

    //stars
    for(int col=0;col<row+1;col=col+1)
    {
        if(col == 0 || col == row + 1 - 1) //row + 1 - 1
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";  
        }
    }
    cout<<endl;
}

for(int row = 0; row<n; row = row+1)
{
    //space 
    for(int col=0; col<row; col=col+1)
    {
        cout<<" ";
    }
    //stars
    int totalCol = n-row;
    for(int col=0; col<totalCol;col=col+1)
    {
        if(col==0 || col==totalCol-1)
    {
        cout<<"* ";
    }
    else
    {
        cout<<"  ";
    }
    }
    cout<<endl;
}

*/

//-----------------------------------------------
//flipped solid diamond

// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
// *               *
// * *           * *
// * * *       * * *
// * * * *   * * * *
/*
int num;
cin>>num;
int n = num/2;

for(int row = 0;row<n;row=row+1)
{
    // Inverted pyramid 1
     for(int col = 0; col<n-row; col=col+1)
     {
        cout<<"*";
     }
      // full pyramid 1
      for(int col=0; col<2*row+1; col=col+1)
      {
        cout<<" ";
      }
    //inverted pyramid 2
    for(int col = 0; col<n-row; col=col+1)
     {
        cout<<"*";
     }
     cout<<endl;
    
}

for(int row = 0;row<n;row=row+1)
{
    // Inverted pyramid 1
     for(int col = 0; col<row+1; col=col+1)
     {
        cout<<"*";
     }
      // full pyramid 1
      for(int col=0; col<2*n-2*row-1; col=col+1)
      {
        cout<<" ";
      }
    //inverted pyramid 2
    for(int col = 0; col<row+1; col=col+1)
     {
        cout<<"*";
     }
     cout<<endl;
    
}
*/
//------------------------------------------------



















 



   

}



