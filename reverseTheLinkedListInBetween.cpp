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

void print(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

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

    int left, right;
    cin >> left >> right;

    head = reverse(head, left, right);
    print(head);

    return 0;
}
