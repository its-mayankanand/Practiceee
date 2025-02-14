#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
    public:
    Node *insertAtHead(Node *&head, Node *&tail , int data)  //ham usi linkedlist ke andar change kar rhe hai isliye by reference
    {
    if(head == NULL)
    {
        //empty LL  = mtlb head bhi null hai and tail bhi null hai
        //step1: create new node
        Node *newNode = new Node(data);

        //step2: update head
        head = newNode;
        tail = newNode; 
    }
    else
    {
        //create a new node
        Node *newNode = new Node(data);
        //attach new node to head node
        newNode -> next = head;
        //update head
        head = newNode;
    }

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

};

int main()
{
    Solution sol;
    Node *head = NULL;
    Node *tail = NULL;

    // Inserting nodes at the tail
    sol.insertAtHead(head, tail, 10);
    sol.insertAtHead(head, tail, 20);
    sol.insertAtHead(head, tail, 30);
    sol.insertAtHead(head, tail, 40);

    // Printing the linked list
    sol.printLL(head);

}