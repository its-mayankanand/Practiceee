//print all divisors of a number

void printDivisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int number;
    cout<<"enter the number: "<<endl;
    cin>>number;

    printDivisors(number);
}