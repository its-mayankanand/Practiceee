#include<iostream>
using namespace std;

//Add 1 to a Linked List
//like if we have 1 -> 2 -> 4
//then its output will be 1 -> 2 -> 5
//124 ka 125 ban gya
// if carry != 0 hah and list khatam ho gyi
//then newNode
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

Node* reverse(Node* &head)
{
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL)
    {
        Node* next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void addOne(Node* &head)
{
    //reverse
    head = reverse(head);

    //add 1
    int carry = 1;
    Node* temp = head;
    while(temp -> next != NULL)
    {
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;


        temp->data = digit;
        temp = temp -> next;
        if(carry == 0)
        {
            break;
        }

    }
    //process last node
    if(carry != 0)
    {
        int totalSum = temp -> data +  carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp -> data = digit;
        
        if(carry!=0)
        {
            Node* newNode = new Node(carry);
            temp->next = newNode;
        }
    }
    //reverse
    head = reverse(head);
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,9);
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,9);

    cout<<"Original Linkedlist: "<<endl;
    printLL(head);
    cout<<endl;

    addOne(head);
    printLL(head);
    cout<<endl;
}




