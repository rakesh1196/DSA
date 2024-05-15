#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* prev;
	Node(int n)
	{
		data = n;
		prev = NULL;
	}
};

//* Function to perform desired operation
void Multiply(Node* head, int i)
{
	Node *temp = head,
		*prevPtr = head; // Temp variable for keeping head
	
	int carry = 0;

	//* Perform operation until temp becomes NULL
	while (temp != NULL) {
		int prod = temp->data * i + carry;
		temp->data = prod % 10; //* Stores the last digit
		carry = prod / 10;
		prevPtr = temp; //* Change Links
		temp = temp->prev; //* Moving temp to next node
	}

	//* If carry is greater than 0 then we create new nodes
	//* to store remaining digits.
	while (carry != 0) {
		prevPtr->prev = new Node((int)(carry % 10));
		carry /= 10;
		prevPtr = prevPtr->prev;
	}
}

//* Using head recursion to print the linked list's data in reverse
void print(Node* head)
{
	if (head == NULL) 
		return;
	print(head->prev);
	cout << head->data; // Print linked list in reverse order
}

// Driver code
int main()
{
	int n = 100;
	Node *head = new Node(1); // Create a node and initialise it by 1
	
	for(int i = 2; i <= n; i++)
		Multiply(head, i); // Run a loop from 2 to n and
							// multiply with head's i
	cout << "Factorial of " << n << " is : \n";
	print(head); // Print the linked list
	cout << endl;
	return 0;
}
