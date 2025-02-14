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

// Function to insert a node at the end of the linked list
Node *insertAtEnd(Node *head, int x) 
{
    // Create a new node with the value x
    Node *newNode = new Node(x);
    
    // If the list is empty, the new node becomes the head
    if (head == nullptr) 
    {
        return newNode;
    }
    
    // Traverse to the last node
    Node *temp = head;
    while (temp->next != nullptr) 
    {
        temp = temp->next;
    }
    
    // Insert the new node at the end
    temp->next = newNode;
    
    // Return the head of the list
    return head;
}

// Function to display the contents of the linked list
void printList(Node* head) 
{
    Node* temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() 
{
    Node *head = nullptr;

    // Inserting elements at the end of the list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    // Printing the linked list
    cout << "Linked list: ";
    printList(head);

    return 0;
}
