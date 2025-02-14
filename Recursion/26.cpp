#include<iostream>
#include<vector>
using namespace std;

//string subsequence
void subset(string &s,int index,int n,vector<string> &ans, string &temp)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }
    //Not included
    subset(s,index+1,n,ans,temp);

    //Included
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main()
{
   string s = "abc";

   vector<string> ans;  //final ans

   string temp;
   
   //function call
   subset(s,0,s.size(),ans,temp);

   //print
   for(int i=0;i<ans.size();i++)
   cout<<"->"<<ans[i]<<endl;


}
//temp ko hamlog byreference nhi bhi pass kar skte the 
//byreference pass krne pe space complexity improve ho jata hai

