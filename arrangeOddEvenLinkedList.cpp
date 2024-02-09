#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) {
            
            return head;
        }
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = even; 
        
        while (even && even->next) {
            
            odd->next = even->next;
            odd = odd->next;
            
            even->next = odd->next;
            even = even->next;
        }
        
        
        odd->next = even_head;
        
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
    int n;
    cin >> n;
    
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
	cout << "Original List: ";
    printList(head);
    
    head = sol.oddEvenList(head);
	cout << "Modified List: ";
    printList(head);
    
    return 0;
}
