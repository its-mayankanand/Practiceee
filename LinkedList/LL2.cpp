#include<iostream>
using namespace std;

//creating a linked list and printing it also.

class Node
{
   public:
   int data;
   Node *next;

   Node(int val)
   {
     data = val;
     next = NULL;
   }
};

class Solution
{
    public:
    //function to display the elements of a linked list
    void display(Node *head)
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main()
{
    //creating a linked list with three nodes
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Solution sol;
    sol.display(head);

    //Freeing allocated memory
    Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head-> next;
        delete temp;
    }

    return 0;


}