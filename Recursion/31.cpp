#include<iostream>
#include<vector>
using namespace std;

//Permutation of string : Type : Recursion
//isme order me hi lena hai jaroori nhi ulta fulta bhi 
//le skte hai
//jitna number hoga utna factorial uska answer hoga 
//alag alag permutation
//example : 3 (1,2,3) total permutation = 6...

void permutation(int arr[], vector<vector<int> > &ans, vector<int> &temp , vector<bool> &visited)
{

    //base case
    if(visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }

    //since we have not passed the size of array
    //so we can use visited size to traverse on the array
    //we can't do arr.size() because arr pointer hai
    //uska size thori na niklega
    
    for(int i=0; i<visited.size(); i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);

            permutation(arr,ans,temp,visited);

            visited[i] = 0;
            temp.pop_back();
        }
    }
}
int main()
{
    int arr[] = {1,2,3};

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3,0);
    

    //calling function
    permutation(arr,ans,temp,visited);

    //printing after finding permutation because
    //will pass all vectors by reference isliye direct
    //main wale me chnage ho jyega

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}