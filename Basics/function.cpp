#include<iostream>
using namespace std;

/*
void printName(string name)
{
    for(int i=0;i<5;i++)
    {
        cout<<name<<endl;
    }
}

int main()
{
    printName("babbar");
    printName("Mayank");
    printName("Kohli");
}
*/
//---------------------------------------------
/*
void printLine ()
{
    for(int i=0;i<10;i++)
    {
        cout<<"sundar ko sundari pasand hai"<<endl;
    }
}

int main()
{
    printLine();

    return 0;
}
*/
//----------------------------------------------
/*
void  printLine()
{
    for(int i=0;i<10;i++)
    {
        cout<<"Mayank Anand"<<endl;
    }
}
int main()
{
    printLine();

    return 0;
}

*/

//-----------------------------------------------
/*
//function declaration (if main is above)
void printLine();

// function call
int main()
{
    printLine();

    return 0;
}
// function definition
void printLine()
{
    for(int i=0;i<10;i++)
    {
     cout<<"Sundar ko sundari pasand hai"<<endl;
    }
}
*/
//if not main is above then declaration not needed.

//-----------------------------------------------------
/*
void printA()
{
    cout<<"I am inside B";
}

int main()
{
    cout<<"Hi"<<endl;
    cout<<"Babbar"<<endl;

    printA();

    return 0;
}
*/

//------------------------------------------------
//function call stack 
//function call ----> add entry in stack.
//function body samapt ----> remove entry.

//------------------------------------------------
// write a function to print sum of 3 numbers
/*
void printSum(int a , int b , int c)
{
    int answer = a + b + c;
    cout<<"Sum is: "<<answer<<endl;
}

int main()
{
    printSum(1,2,7);
    printSum(1,3,7);

    return 0;
}
*/
//------------------------------------------------
//Write a function to return the sum of 3 numbers
/*
int printSum(int a , int b,int c)
{
    int ans = a + b + c;
    return ans;
}

int main()
{
   int sum = printSum(4,4,5);
   cout<<"Sum is:"<<sum<<endl;
}
*/
//------------------------------------------------
//we can use return in void function but make sure
//that dont return any value along with return
/*
void messagePrint()
{
    cout<<"Msg 1"<<endl;
    return;
    cout<<"Msg 2"<<endl;
}
int main()
{
    messagePrint();
}
// Output ----> Msg 1
*/
//------------------------------------------------
// Question 1:
// find max of 3 numbers 
/*
void printMaximum(int num1, int num2 , int num3)
{
     if(num1 >= num2 && num1 >= num3)
     {
        cout<<"Maximum is: "<<num1<<endl;
     }
     else if(num2 >= num1 && num2 >= num3)
     {
        cout<<"Maximum is: "<<num2<<endl;
     }
     else
     {
        cout<<"Maximum is: "<<num3<<endl;
     }
}

int main()
{
    printMaximum(4,8,10);
}
*/
//-------------------------------------------------
/*
void printMaximum(int n1 , int n2 , int n3)
{
    int ans1 = max(n1,n2);
    int finalAns =  max(ans1 , n3);

    cout<<"final Ans is: "<<finalAns<<endl;
}

int main()
{
    printMaximum(3,30,100);
}
*/
//-------------------------------------------------
// if we will return the answer then write return 
//in function and store it in variable in main 
//function and then print it.
/*
int printMaximum(int n1,int n2,int n3)
{
    int ans1 = max(n1,n2);
    int finalAns = max(ans1,n3);

    return finalAns;
}

int main()
{
    int maximum  = printMaximum(1,2,3);
    cout<<"Maximum is: "<<maximum<<endl;
}
*/
//------------------------------------------------
// Question 2 :
// counting from 1 to n
/*
void printCounting(int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    printCounting(10);
}
*/
//------------------------------------------------
// Question 3:
/*
char getGrade(int marks)
{
    if(marks >= 90)
       return 'A';
    else if(marks >=80)
       return 'B';
    else if(marks >= 70)
       return 'C';
    else if(marks >=60)
       return 'D';
    else 
       return 'E';
}

int main()
{
    int marks;
    cout<<"Enter the marks: "<<endl;
    cin>>marks;

    char finalGrade = getGrade(marks);
    cout<<finalGrade<<endl;

    return 0;
}
*/
//------------------------------------------------
/*
int getEvenSum(int n)
{
   int sum = 0;
   for(int i = 2;i<=n;i=i+2)
   {
      sum = sum + i;
   }
   return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    int ans = getEvenSum(n);
    cout<<"Even sum is "<<ans<<endl;
}
*/
//-----------------------------------------------
/*
float circle_area(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout<<"Enter the value of radius"<<endl;
    cin>>radius;

    float ans = circle_area(radius);
    cout<<"Area of circle is: "<<ans<<endl;


}
*/
//------------------------------------------------
/*
bool checkEven(int n)
{
    if(n%2 == 0)
       return true;
    else
       return false;

}

int main()
{
    int n;
    cin>>n;

    bool isEven = checkEven(n);

    if(isEven == 1)
    {
        cout<<"Even Number"<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }

}
*/
//------------------------------------------------






  










  







    
     
