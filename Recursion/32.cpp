#include<iostream>
#include<vector>
using namespace std;

//this is without using the extra space as vectors like visited vector and temp vector 
//which we have taken in previous procedure

void permutation(vector<int> &arr, vector<vector<int> > &ans,int index)
{
    //base case
    if(arr.size() == index)
    {
        ans.push_back(arr);
        return;
    }

    //main
    for(int i=index; i<arr.size();i++)
    {
        swap(arr[index],arr[i]);

        permutation(arr,ans,index+1);

        //normal form me lake chorna hoga swap function ko
        swap(arr[index],arr[i]);
    }
}
int main()
{
    vector<int> arr = {1,2,3};

    vector<vector<int> > ans;
    int index = 0;

    //function calling
    permutation(arr, ans , index);
    
    //printing final ans
    for(int i=0; i < ans.size(); i++)
    {
        for(int j=0; j < ans[i].size(); j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

