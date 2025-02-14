#include<iostream>
using namespace std;

//Check weather a LinkedList is Plindrome 

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

Node* reverseUsingRecursion(Node* prev, Node* curr)
{
    //base case
    if(curr == NULL)
    {
        return prev;
    }

    //1 case hum solve karenge
    Node *nextNode = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = nextNode;

    //baaki recursion sambhal lega
    return reverseUsingRecursion(prev,curr);
}

bool compareList(Node* head1, Node* head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        else
        {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
}

bool isPalindrome(Node* head)
{
    //break into 2 halves
    Node* midNode = middleNode(head);
    Node* head2 = midNode->next;
    midNode->next = NULL;

    //reverse second half
    Node* prev = NULL;
    Node* curr = head2;
    head2 = reverseUsingRecursion(prev,curr);

    //compare both linkedlist
    bool ans = compareList(head,head2);
    return ans;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head,tail,10);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,20);

    cout<<"Original Linkedlist: "<<endl;
    printLL(head);
    

    if(isPalindrome(head))
    {
        cout<<"The linked list is a palindrome."<<endl;

    }
    else
    {
        cout<<"the linked list is not a palindrome"<<endl;
    }
}