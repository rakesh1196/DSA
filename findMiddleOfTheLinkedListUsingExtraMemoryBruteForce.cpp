#include <iostream>
#include <vector>

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

    // Vector to store the values of all nodes in the order
    vector<int> list_values;

    // Traverse through the entire linked list and push all
    // the values into the vector
    while (head != nullptr) {
        list_values.push_back(head->data);
        head = head->next;
    }

    // Find the middle index by dividing the size by 2
    int mid_index = list_values.size() / 2;

    // Return the value stored at the middle index
    return list_values[mid_index];
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
