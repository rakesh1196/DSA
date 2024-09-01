#include <iostream>
using namespace std;

// A singly linked list node
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to find the middle element of the linked list
int getMiddle(Node* head) {
    Node* mid = head;
    int length = 1;

    // Traverse over the entire linked list
    while (head) {

        // If counter is even, move the mid pointer to the
        // next node
        if (length % 2 == 0) {
            mid = mid->next;
        }
        head = head->next;

        // Increment the counter for each node
        length += 1;
    }

    // return the data of the mid node which will be
    // pointing to the middle node of the linked list
    return mid->data;
}


int main() {

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);

    // Example of printing the middle value of the
    // linked list
    cout << "Middle Value Of Linked List is: "
         << getMiddle(head) << endl;

    return 0;
}
