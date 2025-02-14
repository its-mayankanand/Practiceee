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

void insertAtPosition(Node *&head,Node *&tail,int data,int position)
{ 
    //assumption position ki value 1 se length + 1 tak hai.

    int length = getLength(head);

    if(position == 1)
    {
        insertAtHead(head,tail,data);
    }
    
    else if(position == length + 1)
    {
        insertAtTail(head,tail,data);
    }

    else
    {
        //insert at middle of linked list

        //step1: create a node
        Node *newNode = new Node(data);

        //step2: traverse previous and current to position
        Node *prev = NULL;
        Node *curr = head;
        while(position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }

        //step3 : attach previous to new node
        prev -> next = newNode;

        //step4: attach newnode to curr
        newNode -> next = curr;
    }

}

void deleteNode(Node *&head,Node *&tail,int position)
{
   //empty list
   if(head == NULL)
   {
    cout<<"cannot delete"<<endl;
    return;
   }
    
    //single element
    if(head == NULL)
    {
        //single element
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
   
   int length = getLength(head);

   //delete from head
   if(position == 1)
   {
    //first node ko delete kardo
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;

   }

   else if(position == length)
   {
    //last node ko delete kardo

    //find prev
    Node *prev = head;
    while(prev -> next != tail)
    {
        prev = prev -> next;
    }

    //prev ka link null kardo
    prev -> next = NULL;

    //node delete kro
    delete tail;

    //update tail
    tail = prev;
   }

   else
   {
    //middle me koi node kodlete karna hai
    //step1: set prev/curr pointers
    Node *prev = NULL;
    Node *curr = head;
    while(position != 1)
    {
        position--;
        prev = curr;
        curr = curr->next;
    }
    
    //step2: prev -> next me curr ka next node add kro
    prev -> next = curr -> next;

    //step3: node isoloate karo
    curr -> next = NULL;

    //step4: delete node
    delete curr;

   }
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
    printLL(head);
    
    deleteNode(head,tail,3);
    printLL(head);
    cout<<endl;
}