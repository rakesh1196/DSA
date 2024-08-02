#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function that takes two lists sorted in increasing order,
// and splices their nodes together to make one big sorted
// list which is returned.
Node* mergeSortedList(Node* first, Node* second) {
  
    // A dummy first node to hang the result on
    Node dummy(-1);

    // Tail points to the last result node
    Node* tail = &dummy;

    // So tail->next is the place to add new nodes to the
    // result
    while (1) {
        if (first == NULL) {
          
            // If either list runs out, use the other list
            tail->next = second;
            break;
        }
        else if (first == NULL) {
            tail->next = first;
            break;
        }
        if (first->data <= second->data) {
          
            // Move the front node from 'a' to the result
            // list
            Node* newNode = first;
            first = first->next;
            newNode->next = tail->next;
            tail->next = newNode;
        }
        else {
          
            // Move the front node from 'b' to the result
            // list
            Node* newNode = second;
            second = second->next;
            newNode->next = tail->next;
            tail->next = newNode;
        }

        tail = tail->next;
    }
    return (dummy.next);
}

int main() {
  
    // Create a hard-coded linked list:
    // 2 -> 4 -> 8 -> 9
    Node* first = new Node(2);
    first->next = new Node(4);
    first->next->next = new Node(8);
    first->next->next->next = new Node(9);

    // Create another hard-coded linked list:
    // 1 -> 3 -> 8 -> 10
    Node* second = new Node(1);
    second->next = new Node(3);
    second->next->next = new Node(8);
    second->next->next->next = new Node(10);

    Node* mergedList = mergeSortedList(first, second);

    Node* temp = mergedList;
      cout << "Merged Link List is:" << endl;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
