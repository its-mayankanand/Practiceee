#include <iostream>
using namespace std;

// Definition for a singly-linked list node
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

// Function to insert a node at the head of the linked list
Node *insertAtHead(Node *head, int x) 
{
    // Create a new node with the value x
    Node *newNode = new Node(x);
    
    // Make the new node point to the current head
    newNode->next = head;
    
    // Return the new node as the new head of the list
    return newNode;
}

// Function to display the contents of the linked list
void printList(Node* head) 
{
    Node *temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void Length(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp != nullptr)
    {
        count++;
        temp = temp -> next;
    }
    cout<<count<<endl;
}

int main() 
{
    Node* head = nullptr;

    // Inserting elements at the head of the list
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 10);

    // Printing the linked list
    cout << "Linked list: ";
    printList(head);

    cout<<"Length of the Linked List: ";
    Length(head);

    return 0;
}
