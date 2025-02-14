#include<iostream>
using namespace std;

//find loop , its starting point , remove loop

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

bool checkLoop(Node* &head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        //check for loop
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

Node* getStartingPointOfLoop(Node* &head)
{
    //check for loop
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow)
        {
            break;
        }
    }
    //yha paucha iska mtlb slow and fast meet ho chuke h
    slow = head;

    //slow and fast -> 1 step
    while(fast != slow)
    {
        slow = slow -> next;
        fast = fast -> next;

    }
    //return starting point
    return slow;
}

void removeLoop(Node* &head)
{
    //check for loop
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow)
        {
            break;
        }
    }
    //yha paucha iska mtlb slow and fast meet ho chuke h
    slow = head;

    //slow and fast -> 1 step
    while(fast != slow)
    {
        slow = slow -> next;
        fast = fast -> next;

    }
    //return starting point
    Node* startPoint = slow;

    Node* temp = startPoint;
    while(temp->next != startPoint)
    {
        temp = temp->next;
    }
    
    temp->next = NULL;
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

    //creating loop
    tail->next = head->next;
    
    //----------------------------
    if(checkLoop(head)) 
    {
        cout << "Loop detected in the linked list." << endl;
    } 
    else 
    {
        cout << "No loop in the linked list." << endl;
    }
    
    //------------------------------

    cout<<getStartingPointOfLoop(head) -> data <<endl;

    removeLoop(head);

    printLL(head);
    
    //------------------------------

    
    
}



