#include<iostream>
using namespace std;

//Doubly LinkedList--------------

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
}

int findLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    //LL is empty
    if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        //LL is not empty
        Node *newNode = new Node(data);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    //if empty
    if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = NULL;
        tail = NULL;
    }
    else
    {
        //LL is not empty
        Node *newNode = new Node(data);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    //if empty
    if(head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        int len = findLength(head);
        //not empty
        if(position == 1)
        {
            insertAtHead(head, tail, data);
        }
        else if(position == len + 1)
        {
            insertAtTail(head,tail,data);
        }
        else
        {
            //insert in middle 
            //step1: create node
            Node *newNode = new Node(data);
            //step2: set prev and curr pointer
            Node *prevNode =  NULL;
            Node *currNode = head;
            while(position != 1)
            {
                position--;
                prevNode = currNode;
                currNode = currNode -> next;
            }

            //step3: pointers update krrhe the
            prevNode -> next = newNode;
            newNode -> prev = prevNode;

            newNode -> next = currNode;
            currNode -> prev = newNode;
        }
    }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if(head == NULL)
    {
        //LL is empty
        cout<<"canot delete,cos LL is empty"<<endl;
        return;
    }

    if(head == tail)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    
    int len = findLength(head);

    if(position == 1)
    {
        //delete from head
        Node *temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }
    
    else if(position == len)
    {
        //delete from tail
        Node *prevNode = tail -> prev;
        prevNode -> next = NULL;
        tail -> prev = NULL;
        delete tail;
        tail = prevNode;
    }

    else
    {
        //delete from middle
        //step1: set prevNode/currNode/nextNode
        Node *prevNode = NULL;
        Node *currNode = head;
        while(position != 1)
        {
            position--;
            prevNode = currNode;
            currNode = currNode -> next;
        }
        Node *nextNode = currNode -> next;
        //ye teeno apni position par aa gaye

        //step2: pointers update krte hai
        prevNode -> next = nextNode;
        currNode -> prev = NULL;
        currNode -> next = NULL;
        nextNode -> prev = prevNode;

        delete currNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    printLL(head);
    cout<<endl;

    //insertAtTail(head,tail,1000);
    //printLL(head);

    // insertAtPosition(head,tail,1000,5);
    // printLL(head);

    // deleteNode(head,tail,1);
    // printLL(head);
    // cout
    // deleteNode(head,tail,2);
    // printLL(head);
    // cout<<endl;

    // deleteNode(head,tail,2);
    // printLL(head);

    // cout<<endl;
    // deleteNode(head,tail,1);
    // cout<<"length of LL is"<<findLength(head)<<endl;
    // printLL(head);

    // deleteNode(head,tail,1);
    // printLL(head);

    deleteNode(head,tail,2);
    printLL(head);
}
