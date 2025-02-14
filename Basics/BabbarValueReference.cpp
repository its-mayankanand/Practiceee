/*
#include<iostream>
using namespace std;

int main()
{
    /*
    int n=5;  // normal integer variable

    //k is a Reference varibale referring to n;
    int &k = n;

    //c is a Reference variable referring to n;
    int &c = n;

    cout<<n<<endl;
    cout<<k<<endl;
    cout<<c<<endl;


    k++;

    cout<<"n: "<<n<<endl;
    cout<<"k: "<<k<<endl;
    cout<<"c: "<<c<<endl;


   // int &t = 6;//cant assign value to reference 
   //variable

}
*/
//------------------------------------------------
// Call by value
/*
#include<iostream>
using namespace std;

int incrementBy1(int n)  //another n
{
    n = n + 1;
    return n;
}
int main()
{
    int n;
    cin>>n;
  
    n = incrementBy1(n);     //other (n)

    cout<<"n: "<<n<<endl;

}

// naya n ka value increment ho rha tha and usko
//hmko return karna pad rha tha.
*/
//------------------------------------------------

//Call by Reference

#include<iostream>
using namespace std;

void incrementBy1(int &n)
{
    n = n * 109;
}

int main()
{
    int n;
    cin>>n;

    incrementBy1(n);

    cout<<"n: "<<n<<endl;
}

//yha naya n nhi ban rha hai isliye
//wo automatic main ke n ko change kar dega
// here don't need to return.
//k wahi se main me n ka value change kar dega
//kyunki k is the another name of n.

