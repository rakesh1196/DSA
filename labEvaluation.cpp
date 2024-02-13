#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node* insertionSort(Node* head) {
    if (!head || !head->next){
        return head;
    }
    Node *dum = new Node(0);
    dum->next = head;
    Node *prev = head, *cur = head->next;
    while (cur) {
        if (cur->val < prev->val) {
            Node *p = dum;
            while (p->next->val < cur->val) {
                p = p->next;
            }
            prev->next = cur->next;
            cur->next = p->next;
            p->next = cur;
            cur = prev->next;
        } 
        else {
            prev = cur;
            cur = cur->next;
        }
    }
    return dum->next;
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

    head = insertionSort(head);
    print(head);

    return 0;
}
