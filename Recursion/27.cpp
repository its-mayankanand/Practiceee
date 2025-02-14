#include<iostream>
#include<vector>
using namespace std;

//Subsets sums
//jitne subsets banage utne ke sum ayege
//subsequence and subsets are same yha pe bas agr int subsequence hai toh 
//uska sum print karna hai each ka

/*
void print(int arr[] , int index, int n, int sum)
{
    //base case
    if(index == n)
    {
        cout<<sum<<endl;
        return;
    }

    //Not included
    print(arr,index+1,n,sum);

    //Included
    print(arr,index+1, n , sum + arr[index]);

}
int main()
{
    int arr[] = {1,2,3,4};
    int index = 0;
    int size = 4;
    int sum = 0;

    print(arr,index,size,sum);
}

*/
//----------------------------------------------------
//same question me ek variation hai ki
//sum jo mai print function me print kara rha hu
//mai wha na karake main function me print karayu
//mai ek vector ke andar store karake usko print kara
//sakta hu
void print(int arr[],int index,int n,int sum,vector<int> &ans)
{
    if(index == n)
    {
        ans.push_back(sum);
        return;
    }

    //Not included
    print(arr,index+1,n,sum,ans);

    //Included
    print(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
    int arr[] = {1,2,3,4};
    int index = 0;
    int size = 4;
    int sum = 0;
    
    //mai ek vector le leta hu usi me store karake 
    //sum print kara dunga
    vector<int> ans;
    
    //function calling
    print(arr,index,size,sum,ans);

    //printing vector
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}

//its time complexity will be O(2^n)
//its space complexity will be O(n)

