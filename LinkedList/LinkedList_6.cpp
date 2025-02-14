#include<iostream>
using namespace std;

//Middle of a Linked List

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

/*
Node* middleNode(Node* head) //ye case hai odd perfect if even number elements hai toh n/2 ke ek bad wala ko middle le rhe hah
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            //mai yha keh skta hu ki fast ne 2 step chal liye
            //ab slow ko bhi chalwa do 1 step
            slow = slow -> next;
        }
    }
    return slow;
}
*/

Node* middleNode(Node* head) //isme even case me jo n/2 hoga wahi le rhe hai
{
    Node* slow = head;
    Node* fast = head;

    while(fast -> next != NULL)
    {
        fast = fast -> next;
        if(fast -> next != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    return slow;
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
    insertAtTail(head,tail,60);

    cout<<"Original Linkedlist: "<<endl;
    printLL(head);
    

    Node* ans = middleNode(head);
    if (ans != NULL) 
    {
        cout << "Middle Node: " << ans->data << endl;
    } 
    else 
    {
        cout << "The list is empty, no middle node found." << endl;
    }


}