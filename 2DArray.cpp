#include<iostream>
#include<limits.h>
using namespace std;

/*
void printcol(int arr[][4] , int row, int col)
{
    //column wise
    for(int j=0; j<col; j++)
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}
int main()
{
    //create 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the value in array row wise
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // cout<<arr[row][col]<<" ";

    //print all the value in array col wise, function call
    printcol(arr,3,4);

}

*/

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
//find if an element is present in array or not
int main()
{
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};

    int x = 12;

    for(int row=0; row < 3; row++)
    {
       for(int col=0; col < 4; col++)
       {
        if(arr[row][col] == x)
        {
        cout<<"Yes"<<endl;
        return 0;
        }
       }
    }
    cout<<"No"<<endl;
}
*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Add 2 matrix
/*
int main()
{
    int arr1[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]= {0,1,3,4,6,7,10,11,41,18,9,11};
    int ans[3][4];

    //Add 2 matrix
    for(int row=0; row<3; row++)
    {
       for(int col=0; col<4; col++)
       {
           ans[row][col] = arr1[row][col] + arr2[row][col];
       }
    }

    for(int row=0; row < 3; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout<<ans[row][col]<<endl;
        }
    }

}
*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Print Row index with maximum sum
/*
int main()
{
    int arr[3][4] = {1,21,31,4,5,6,7,8,9,10,11,12};
    int row = 3;
    int col = 4;
    int sum = INT_MIN;
    int index = -1;

    for(int i=0; i<row; i++)
    {
        int total = 0;
        for(int j=0; j<col; j++)
        {
            total = total + arr[i][j];
        }

        if(sum < total)
        {
            sum = total;
            index = i;
        }
    }

    cout<<index<<endl;
}
*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Print row index with maximum sum
/*
void printrowmax(int arr[][4],int row,int col)
{
    int index = -1 , sum = INT_MIN;
    for(int i=0; i<row; i++)
    {
        int total = 0;
        for(int j=0; j<col; j++)
        {
            total +=  arr[i][j];
        }
        if(total > sum)
        {
            sum = total;
            index = i;
        }
    }
    cout<<index<<" ";
}
int main()
{
    int arr1[3][4] = {1,2,3,4,5,1,2,3,4,5,1,2};

    printrowmax(arr1,3,4);
}

*/
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Sum of Diagonal Element
/*
void printsumdiagonal(int matrix[][3], int row, int col)
{
    int first = 0;
    int second = 0;

    //first diagonal sum
    for(int i=0; i<row; i++)
    {
        first += matrix[i][i];
    }

    //second diagonal sum
    int i = 0;
    int j = col-1;
    while(j>=0)
    {
        second += matrix[i][j];
        i++;
        j--;
    }
    cout<<first<<" "<<second;
}
int main()
{
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    printsumdiagonal(matrix,3,3);
}

*/
//+++++++++++++++++++++++++++++++++++++++++++++++++

//Reverse each row of Matrix

void reverserow(int matrix[][3],int row,int col)
{
    for(int i=0; i<row; i++)
    {
        int start=0 , end = col-1;
        while(start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cout<<matrix[i][j]<<" ";
}
int main()
{
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};

    reverserow(matrix,3,3);
}