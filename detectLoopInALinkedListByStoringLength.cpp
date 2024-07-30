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

/*returns distance between first and last node every time
 * last node moves forwards*/
int distance(Node* first, Node* last)
{
    /*counts no of nodes between first and last*/
    int counter = 0;

    Node* curr;
    curr = first;

    while (curr != last) {
        counter += 1;
        curr = curr->next;
    }

    return counter + 1;
}

// Function to detect first node of loop
// in a linked list that may contain loop
bool detectLoop(Node* head)
{

    // Create a temporary node
    Node* temp = new Node(0);

    Node *first, *last;

    /*first always points to head*/
    first = head;
    /*last pointer initially points to head*/
    last = head;

    /*current_length stores no of nodes between current
     * position of first and last*/
    int current_length = 0;

    /*prev_length stores no of nodes between previous
     * position of first and last*/
    int prev_length = -1;

    while (current_length > prev_length && last != NULL) {
        // set prev_length to current length then update the
        // current length
        prev_length = current_length;
        // distance is calculated
        current_length = distance(first, last);
        // last node points the next node
        last = last->next;
    }

    if (last == NULL) {
        return false;
    }
    else {
        return true;
    }
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
        cout << "No Loop Found";

    return 0;
}
