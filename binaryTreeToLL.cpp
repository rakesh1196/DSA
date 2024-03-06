#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {
    }
};

void flatten(TreeNode* root) {
    if(root == NULL) return;

    stack<TreeNode*> stk;
    stk.push(root);

    while(!stk.empty()) {
        TreeNode* node = stk.top();
        stk.pop();

        if(node->right != NULL) {
            stk.push(node->right);
        }

        if(node->left != NULL) {
            stk.push(node->left);
        }

        if(!stk.empty()) {
            node->right = stk.top();
        }

        node->left = NULL;
    }
}

void printList(TreeNode* root) {
    while(root != NULL) {
        cout << root->val << " ";
        root = root->right;
    }
}

int main() {
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    flatten(root);

    printList(root);

    return 0;
}
