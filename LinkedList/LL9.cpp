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

// Function to check if two linked lists are identical
bool areIdentical(Node *head1, Node *head2) 
{
    // Traverse both lists
    while (head1 != NULL && head2 != NULL) 
    {
        // Compare data of both nodes
        if (head1->data != head2->data) 
        {
            return false;  // Data mismatch
        }
        
        // Move to the next nodes in both lists
        head1 = head1->next;
        head2 = head2->next;
    }
    
    // If both lists have reached the end, they are identical
    return (head1 == NULL && head2 == NULL);
}

// Helper function to append nodes to the list
Node *append(Node *head, int data) 
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

// Main function to test the areIdentical function
int main() 
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    
    // Create first linked list: 1 -> 2 -> 3
    head1 = append(head1, 1);
    head1 = append(head1, 2);
    head1 = append(head1, 3);
    
    // Create second linked list: 1 -> 2 -> 3
    head2 = append(head2, 1);
    head2 = append(head2, 2);
    head2 = append(head2, 3);
    
    // Check if the two lists are identical
    if (areIdentical(head1, head2)) 
    {
        cout << "The linked lists are identical." << endl;
    } 
    else 
    {
        cout << "The linked lists are not identical." << endl;
    }
    
    return 0;
}
