#include <iostream>
using namespace std;

class MyStack 
{
    int top;
    int arr[1000]; // Max size of the stack

public:
    MyStack() 
    {
        top = -1;  // Initialize top to -1 to indicate that stack is empty
    }

    // Function to push an integer into the stack.
    void push(int x) 
    {
        if (top >= 999) 
        {  // Stack is full
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;  // Add the new element at the top of the stack
    }

    // Function to remove an item from the top of the stack.
    int pop() 
    {
        if (top == -1) 
        {  // Stack is empty
            return -1;
        }
        int poppedElement = arr[top];  // Retrieve the top element
        top--;  // Decrease the top to remove the element
        return poppedElement;
    }

    // Function to print the remaining stack
    void printStack() 
    {
        if (top == -1) 
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Remaining elements in stack: ";
        for (int i = 0; i <= top; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    MyStack stack;     //like object creation

    int queries;
    cin >> queries;  // Number of queries

    while (queries--) 
    {
        int queryType;
        cin >> queryType;

        if (queryType == 1) 
        {
            int x;
            cin >> x;
            stack.push(x);  // Push x into the stack
        }
        else if (queryType == 2) 
        {
            cout << stack.pop() << endl;  // Pop from the stack and print the result
        }
    }

    // After all operations, print the final stack
    stack.printStack();

    return 0;
}

