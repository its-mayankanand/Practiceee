#include<bits/stdc++.h>
using namespace std;

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

//Insert in a sorted Linked List
Node *sortedInsert(Node *&head, int x) 
{
    Node *newNode = new Node(x);

    // Case 1: List is empty or new node needs to be the new head
    if (head == nullptr || head->data >= x) 
    {
        newNode->next = head;
        return newNode; // New head
    }

    // Case 2: Find the correct position to insert
    Node  *current = head;
    while (current->next != nullptr && current->next->data < x) 
    {
        current = current->next;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;

    return head; // Return the unchanged head
}

// Helper function to append nodes to the list
Node *append(Node *&head, int data) 
{
    Node* newNode = new Node(data);
    if (head == NULL) 
    {
        return newNode;
    }
    
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(Node *&head) 
{
    Node *temp = head;
    while (temp != nullptr) 
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function to test the areIdentical function
int main() 
{
    Node *head = NULL;
    
    // Create first linked list: 1 -> 2 -> 3
    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);
    head = append(head, 5);
    
    
    cout << "Original Linked List: ";
    printList(head); // Print the list before insertion

    // Insert a new node with value 4
    head = sortedInsert(head, 4);

    cout << "Linked List after inserting 4: ";
    printList(head);

    return 0;
}
