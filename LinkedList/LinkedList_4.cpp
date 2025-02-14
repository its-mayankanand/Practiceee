#include<iostream>
using namespace std;

//Reverse a Linked List

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

void printLL(Node *head)
{
    Node *temp = head;  

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node *head)
{
    Node *temp  = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, Node *&tail , int data)  //ham usi linkedlist ke andar change kar rhe hai isliye by reference
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

void insertAtTail(Node *&head, Node *&tail, int data)
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

Node* reverseLL(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    while(curr != NULL)
    {
        Node *nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    
    cout<<"Original Linkedlist: "<<endl;
    printLL(head);

    
    //Reverse Linked list
    head = reverseLL(head);

    cout<<"Reversed Linked List: "<<endl;
    printLL(head);


}



