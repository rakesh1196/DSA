#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) {
            return head;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        if (!fast) {
            ListNode* new_head = head->next;
            delete head;
            return new_head;
        }
        
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode* to_remove = slow->next;
        slow->next = slow->next->next;
        delete to_remove;
        
        return head;
    }
};

void printList(ListNode* node) {
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    
    int n, x;
    
    cin >> n;
    
    cin >> x;
    
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        ListNode* node = new ListNode(val);
        if (!head) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    
    Solution sol;
   
    head = sol.removeNthFromEnd(head, x);
    printList(head);
    
    return 0;
}
