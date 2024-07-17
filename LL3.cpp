#include<iostream>
using namespace std;

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

//Solution class to encapsulate the insertAtEnd method

class Solution
{
    public:
    Node *insertAtEnd(Node *&head,int x)
    {
        //step1:create new Node
        Node *newNode = new Node(x);

        //step: check
        if(head == NULL)
        {
            head = newNode;
            return head;
        }

        //step: insert
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newNode;
        return head;
    }

    void printLL(Node *&head)
    {
       Node *temp = head;  

       while(temp != NULL)
       {
         cout<<temp->data<<"->";
         temp = temp->next;
       }
       cout<<endl;
    }

    void clear(Node* &head) 
    {
        while (head) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    Solution sol;
    Node *head = NULL;

    //Adding elements to linkedlist
    head = sol.insertAtEnd(head,9);
    head = sol.insertAtEnd(head,8);
    head = sol.insertAtEnd(head,30);

    //Displaying the linkedlist
    sol.printLL(head);

    //Clearing the linked list memory
    sol.clear(head);

    return 0;
}