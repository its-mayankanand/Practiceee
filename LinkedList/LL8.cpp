#include <iostream>
using namespace std;

// Node structure definition
struct Node 
{
    int data;
    Node *next;

    // Constructor to initialize node
    Node(int val) 
    {
        data = val;
        next = NULL;
    }
};

// Function to check if the linked list is circular
bool isCircular(Node *&head) 
{
    if (head == NULL)  // An empty list is not circular
    {
        return false;     
    }
    
    Node *slow = head;
    Node *fast = head;
    
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;   // Move fast pointer two steps
        slow = slow->next;         // Move slow pointer one step
        
        if (fast == slow)
        {
            return true;    // cycle detected
        }
    }  
    return false;
}

// Helper function to append nodes to the list
Node* append(Node *&head, int data) 
{
    Node *newNode = new Node(data);
    if (head == NULL) 
    {
        return newNode;
    }
    
    Node* temp = head;
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
    
int main()
{ 
    Node *head = NULL;
    
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);
    head = append(head, 4);
    head = append(head, 5);
    
    // Check if the list is circular
    if (isCircular(head)) 
    {
        cout << "The linked list is circular." << endl;
    } 
    else 
    {
        cout << "The linked list is not circular." << endl;
    }
    
    cout<<"Linked list: ";
    printList(head);

    return 0;
}

//The linked is not circular because abhi tak usme loop create kiye hi nhi hai
//basically dekha jaye toh check krne de skta hai ki check weather a circular or not