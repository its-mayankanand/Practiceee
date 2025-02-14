#include<iostream>
using namespace std;

//This is code of insert at tail At the End using head tail both.
//This is also with some OOPS concept

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
    Node *insertAtTail(Node *&head, Node *&tail, int data)
    {
    if(head == NULL)
    {
        //empty LL
        //step1: create node
        Node *newNode = new Node (data);

        //step2: single node h entire list me
        //thatswhy head and tail ko ispe point karado
        head = newNode;
        tail = newNode;
    }
    else
    {
        //non empty
        //step1: create new node
        Node *newNode = new Node(data);

        //step2: tail node ko attach kro new node se
        tail -> next = newNode;

        //step3: update tail
        tail = newNode;
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
    sol.insertAtTail(head, tail, 10);
    sol.insertAtTail(head, tail, 20);
    sol.insertAtTail(head, tail, 30);
    sol.insertAtTail(head, tail, 40);

    // Printing the linked list
    sol.printLL(head);

    return 0;
}



