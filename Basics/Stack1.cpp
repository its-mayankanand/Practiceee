#include<iostream>
#include<stack>
using namespace std;

//Implement it with Array
class Stack
{
    int *arr;
    int size;
    int top;

    public:
    //constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    //push
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack\n";

        }
    }

    //pop

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack underflow\n";
        }
        else
        {
            cout<<"Popped "<<arr[top]<<" from the stack\n";
            top--;
        }
    }
    //peek
    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    //IsEmpty
    bool IsEmpty()
    {
        return top == -1;
    }

    //IsSize
    int IsSize()
    {
        return top+1;
    }


};

int main()
{
    //creation
    Stack S(5);

    S.push(5);
    S.push(6);
    S.push(8);

    cout<<S.peek()<<endl;
    cout<<S.IsEmpty()<<endl;
    cout<<S.IsSize()<<endl;

}