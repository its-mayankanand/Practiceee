#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//2D vector and all

int main()
{
   //create 2d vector
   //vector<vector<int> >matrix;

   //rows col and initialization
   vector<vector<int> >matrix(3,vector<int>(4,0));
   //3 rows and 4 col and each initialize with
   // 0

   //print
//    for(int i=0;i<3;i++)
//    for(int j=0;j<4;j++)
//    cout<<matrix[i][j]<<" ";

//to find no of rows in it
cout<<"Rows = "<<matrix.size();
cout<<endl;
//to find no of columns
cout<<"Cols = "<<matrix[0].size();

}