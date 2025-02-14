#include<iostream>
using namespace std;

//Babbar starting Linkedlist

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

int main()
{
    //creation of Node
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *tail = fifth;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    //linkedlist create ho chuki hai
    

    Node *head = first;
    
    ///////
    cout<<"Printing the entire LL:"<<endl;
    printLL(head);
    
    ///////
    cout<<"Printing the length of LL:"<<endl;
    int ans = getLength(head);
    cout<<ans<<endl;

    ///////
    // insertAtHead(head,tail,500);
    // printLL(head);

    ///////
    insertAtTail(head,tail,500);
    printLL(head);

}