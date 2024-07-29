#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
      Node(int x) {
        data = x;
          next = NULL;
    }
};

// A utility function to print a linked list
void printList(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to detect first node of loop
// in a linked list that may contain loop
bool detectLoop(Node* head)
{
    // Create a temporary node
    Node* temp = new Node(0);
    while (head != NULL) {
        // This condition is for the case when there is no
        // loop
        if (head->next == NULL)
            return false;
        // Check if next is already pointing to temp
        if (head->next == temp)
            return true;
        // Store the pointer to the next node
        // in order to get to it in the next step
        Node* next = head->next;
        // Make next point to temp
        head->next = temp;
        // Get to the next node in the list
        head = next;
    }
    return false;
}


int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    /* Create a loop for testing(5 is pointing to 3) */
    head->next->next->next->next->next = head->next->next;
    bool found = detectLoop(head);
    if (found)
        cout << "Loop Found";
    else
        cout << "No Loop";
    return 0;
}
