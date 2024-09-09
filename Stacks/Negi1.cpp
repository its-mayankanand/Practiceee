#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Immediate smaller element
//Example
//Input: n = 5, arr[] = {4, 2, 1, 5, 3}
//Output: 2 1 -1 3 -1
//This is a question of stack but we can do this first off all without using stack then will 
//do with stack

/*
void immediateSmaller(vector<int> &arr)
{
    int n = arr.size();

    for(int i=0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            arr[i] = arr[i+1];
        }
        else
        {
            arr[i] = -1;
        }
    }
    arr[n-1] = -1;
}

int main()
{
    vector<int> arr = {4 , 2 , 1 , 5 , 3};

    //calling function
    immediateSmaller(arr);


    //printing array after changing
    cout << "Updated array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

*/

//----------------------------------------------------------------------

//same question using stack

void immediateSmaller(vector<int> &arr)
{
    int n = arr.size();

    stack<int> st;
    st.push(arr[0]);

    for(int i=1; i<n; i++)
    {
       if(arr[i] < st.top())
       {
         arr[i-1] = arr[i];
         st.pop();
       }
       else
       {
        arr[i-1] = -1;
       }
       st.push(arr[i]);
    }
    arr[n-1] = -1;

}
int main()
{
    vector<int> arr = {4 , 2 , 1 , 5 , 3};

    //calling function
    immediateSmaller(arr);


    //printing array after changing
    cout << "Updated array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

