#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* node = new Node(x);
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    Node* middle = middleNode(head);
    cout << middle->val << endl;
    return 0;
}

