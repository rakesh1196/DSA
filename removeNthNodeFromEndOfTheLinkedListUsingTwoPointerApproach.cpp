#include <bits/stdc++.h>
using namespace std;

// Structure of node
struct Node {
	int data;
	struct Node* next;
};

// Function to insert node in a linked list
struct Node* create(struct Node* head, int x)
{
	struct Node *temp, *ptr = head;
	temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)
		head = temp;
	else {
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return head;
}

// Function to remove nth node from last
Node* removeNthFromEnd(Node* head, int B)
{
		Node *start = new Node();
		start -> next = head;
		Node* fastPtr = start;
		Node* slowPtr = start; 
		// Traverse the LinkedList B times
		for(int i = 0; i < B; i++){
		fastPtr = fastPtr->next;
		}
	//Increase the slow pointer
		while(fastPtr->next != NULL)
		{
			fastPtr = fastPtr->next;
			slowPtr = slowPtr->next;
		}
		//Deletion step
		slowPtr->next = slowPtr->next->next;
	//Return head
		return start->next;
}

// This function prints contents of linked 
// list starting from the given node 
void display(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


int main()
{
	struct Node* head = NULL;
	head = create(head, 1);
	head = create(head, 2);
	head = create(head, 3);
	head = create(head, 4);
	head = create(head, 5);
	
	int n = 2;
	
	cout << "Linked list before modification: \n";
	display(head);

	head = removeNthFromEnd(head, 2);
	cout << "Linked list after modification: \n";
	display(head);
	return 0;
}


