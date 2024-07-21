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

void reverseUtil(Node* curr, Node* prev, Node** head);

// This function mainly calls reverseUtil()
// with prev as NULL
void reverse(Node** head)
{
    if (!head)
        return;
    reverseUtil(*head, NULL, head);
}

// A simple and tail-recursive function to reverse
// a linked list.  prev is passed as NULL initially.
void reverseUtil(Node* curr, Node* prev, Node** head)
{
    /* If last node mark it head*/
    if (!curr->next) {
        *head = curr;
        /* Update next to prev node */
        curr->next = prev;
        return;
    }
    /* Save curr->next node for recursive call */
    Node* next = curr->next;
    /* and update next ..*/
    curr->next = prev;
    reverseUtil(next, curr, head);
}

// A utility function to print a linked list
void printlist(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);
    head1->next->next->next->next->next = new Node(6);
    head1->next->next->next->next->next->next = new Node(7);
    head1->next->next->next->next->next->next->next
        = new Node(8);
    cout << "Given linked list\n";
    printlist(head1);
    reverse(&head1);
    cout << "Reversed linked list\n";
    printlist(head1);
    return 0;
}
