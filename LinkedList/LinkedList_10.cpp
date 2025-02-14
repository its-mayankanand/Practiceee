#include<iostream>
using namespace std;

//reverse in k group 
//example -  1 -> 2 -> 3 -> 4 -> 5 -> 6
//if k = 2 hah then pehla do lo usko reverse kro 2 -> 1 and so on
//hence final output 2 -> 1 -> 4 -> 3 -> 6 -> 5
//odd element ke case me last element as it is
//single group ko reverse karunga baki recursion sambhalega

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

void printLL(Node* head)
{
    Node *temp = head;  

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head)
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

Node* reverseKGroup(Node* &head, int k) 
{
    if(head == NULL)
    {
        return head;
    }
    if(head -> next == NULL)
    {
        return head;
    }

    //1 case solve karunga ek k group
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = curr -> next;
    int pos = 0;

    int len = getLength(head);
    if(len < k)
    {
        return head;
    }

        
    while(pos < k)
    {
        nextNode = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = nextNode;

        pos++;
    }

    //agr aage ka node exist krta hai then only proceed
    Node* recursionKaAns = NULL;
    if(nextNode != NULL)
    {
        recursionKaAns = reverseKGroup(nextNode,k);
        head -> next = recursionKaAns;
    }
    return prev;  //lastb wala head ban jyega
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


    int k = 2;
    head = reverseKGroup(head, k);
    cout << "Linked List after reversing in groups of " << k << ": " << endl;
    printLL(head);



}



