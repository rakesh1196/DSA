#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;

    while (current->next != NULL) {
        if (current->next->val == val) {
            ListNode* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }

    return dummy->next;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = NULL;
    int n, val;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    if (n == 0) {
        cout << "List is empty!" << endl;
        return 0;
    }

    cout << "Enter the elements of the linked list:" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0) {
            head = new ListNode(x);
        } else {
            ListNode* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new ListNode(x);
        }
    }

    cout << "Enter the value to be removed: ";
    cin >> val;

    cout << "Original List: ";
    printList(head);

    head = removeElements(head, val);

    cout << "Updated List: ";
    printList(head);

    return 0;
}





// // C++ program to delete all occurrences
// // of a given key in linked list
// #include <bits/stdc++.h>
// using namespace std;

// // A linked list node
// class Node {
// public:
// 	int data;
// 	Node* next;
// };

// // Given a reference (pointer) to the head
// // of a list and an int, inserts a new node
// // on the front of the list
// Node* push(Node* head, int new_data)
// {
// 	Node* new_node = new Node();
// 	new_node->data = new_data;
// 	new_node->next = head;
// 	head = new_node;
// 	return head;
// }

// // Given a reference (pointer)to the head
// // of a list and a key, deletes all
// // occurrence of the given key in
// // linked list
// Node* deleteKey(Node* head, int x)
// {
// 	// In Linked List is empty Just return it
// 	if (!head)
// 		return head;
// 	// Until the head data is equal to the key move the head
// 	// pointer
// 	while (head && head->data == x)
// 		head = head->next;
// 	Node *curr = head, *prev = nullptr;

// 	while (curr) {
// 		if (curr->data == x)
// 			prev->next = curr->next;
// 		else
// 			prev = curr;
// 		curr = curr->next;
// 	}
// 	return head;
// }

// // This function prints contents of
// // linked list starting from the
// // given node
// void printList(Node* node)
// {
// 	while (node) {
// 		cout << node->data << " ";
// 		node = node->next;
// 	}
// }

// // Driver code
// int main()
// {

// 	// Start with the empty list
// 	Node* head = NULL;
// 	head = push(head, 7);
// 	head = push(head, 2);
// 	head = push(head, 3);
// 	head = push(head, 2);
// 	head = push(head, 8);
// 	head = push(head, 1);
// 	head = push(head, 2);
// 	head = push(head, 2);

// 	// Key to delete
// 	int key = 2;
// 	cout << "Created Linked List:\n ";
// 	printList(head);
// 	// Function call
// 	head = deleteKey(head, key);

// 	if (!head)
// 		cout << "\nNo element present in the Linked list"
// 			<< endl;
// 	else {
// 		cout << "\nLinked List after Deletion is:\n";
// 		printList(head);
// 	}
// 	return 0;
// }

// // This code is contributed by Aditya Kumar (aditykumar129)

