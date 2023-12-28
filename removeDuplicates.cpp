#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *prev = NULL;
    ListNode *curr = head;
    while(curr != NULL) {
        bool flag = false;
        while(curr->next != NULL && curr->val == curr->next->val) {
            flag = true;
            ListNode *temp = curr;
            curr = curr->next;
            delete temp;
        }
        if(flag) {
            ListNode *temp = curr;
            curr = curr->next;
            delete temp;
        } else {
            if(prev == NULL) {
                head = curr;
            } else {
                prev->next = curr;
            }
            prev = curr;
            curr = curr->next;
        }
    }
    if(prev == NULL) {
        head = NULL;
    } else {
        prev->next = NULL;
    }
    return head;
}

void printList(ListNode *head) {
    if(head == NULL) {
        cout << "-1" << endl;
        return;
    }
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, val;
    cin >> n;
    ListNode *head = NULL;
    ListNode *curr = NULL;
    for(int i=0; i<n; i++) {
        cin >> val;
        if(head == NULL) {
            head = new ListNode(val);
            curr = head;
        } else {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
    }
    head = deleteDuplicates(head);
    printList(head);
    return 0;
}
