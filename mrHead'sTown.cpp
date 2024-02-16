#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node* reverse(Node* head, int left, int right) {
    if (!head) return NULL;
    Node dum(0);
    dum.next = head;
    Node *pre = &dum;
    for (int i = 1; i < left; i++) pre = pre->next;
    Node *cur = pre->next;
    for (int i = left; i < right; i++) {
        Node *move = cur->next;
        cur->next = move->next;
        move->next = pre->next;
        pre->next = move;
    }
    return dum.next;
}

void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, left, right;
    cin >> n >> left >> right;

    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node *node = new Node(val);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    Node *newHead = reverse(head, left, right);
    printList(newHead);

    return 0;
}
