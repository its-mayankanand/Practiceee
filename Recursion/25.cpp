#include<iostream>
#include<vector>
using namespace std;

// Subsequences order me hona chaiye 
//suppose {1,2,3} hai toh eg. (1,2) ho skta hai (1,3) bhi but (2,1) ya (3,1) nhi ho skta
//Question 1: find all possible subsequences
//And store it in 2D vector and print
//isme ham temp ko bhi by reference pass kar skte hau usse bas apne ko usko pop back bhi krna hoga
void subsequence(int arr[],int index,int n, vector<vector<int> > &ans, vector<int> &temp)
{
    //base case
    if(index == n)
    {
        ans.push_back(temp);  //1D array ko 2D array me aise karke dal skte hai
        return;
    }

    //Not included
    subsequence(arr,index+1,n,ans,temp);
    //Included
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
    temp.pop_back();
}
int main()
{
   int arr[] = {1,2,3};
   vector<vector<int> >ans;
   vector<int>temp;
   
   //function call
   subsequence(arr,0,3,ans,temp);

   //print
   for(int i=0;i<ans.size();i++) 
   {
     for(int j=0;j<ans[i].size();j++)
     {
        cout<<ans[i][j]<<" ";
     }
     cout<<endl;
   }


}

// 8 subsequence will be printed one space will also be there
