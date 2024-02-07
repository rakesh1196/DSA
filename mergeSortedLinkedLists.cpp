#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dum(0);
    ListNode* tail = &dum;
    
    while (l1 && l2) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        }
        else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    
    if (l1)
        tail->next = l1;
    if (l2)
        tail->next = l2;
    
    return dum.next;
}

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n1, n2;
        cin >> n1;
        
        ListNode* l1 = NULL;
        ListNode* tail1 = NULL;
        for (int i = 0; i < n1; i++) {
            int val;
            cin >> val;
            ListNode* node = new ListNode(val);
            if (l1 == NULL)
                l1 = node;
            else
                tail1->next = node;
            tail1 = node;
        }
        
        cin >> n2;
        
        ListNode* l2 = NULL;
        ListNode* tail2 = NULL;
        for (int i = 0; i < n2; i++) {
            int val;
            cin >> val;
            ListNode* node = new ListNode(val);
            if (l2 == NULL)
                l2 = node;
            else
                tail2->next = node;
            tail2 = node;
        }
        
        ListNode* merged = mergeTwoLists(l1, l2);
        printList(merged);
    }
    
    return 0;
}
