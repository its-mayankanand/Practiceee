#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //find an element in our array

    int x = 7;

    for(int row = 0; row <3; row++)
    {
        for(int col=0; col<4; col++)
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