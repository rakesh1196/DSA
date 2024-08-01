#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Function to merge two sorted linked list
Node* mergeSortedList(Node* first, Node* second) {
  
    // Vector to temporarily store the values
    vector<int> vec;

    // Pushing the values of first linked list
    while (first != NULL) {
        vec.push_back(first->data);
        first = first->next;
    }
    // Pushing the values of second linked list
    while (second != NULL) {
        vec.push_back(second->data);
        second = second->next;
    }

    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Creating a new list with sorted values
    Node* temp = new Node(-1);
    Node* head = temp;
    for (int i = 0; i < vec.size(); i++) {
        temp->next = new Node(vec[i]);
        temp = temp->next;
    }
    head = head->next;

    // Returning the resultant linked list
    return head;
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
