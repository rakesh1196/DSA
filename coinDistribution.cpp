#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int distributeCoins(TreeNode* root, int& moves) {
    if (!root) {
        return 0;
    }
    int left = distributeCoins(root->left, moves);
    int right = distributeCoins(root->right, moves);
    moves += abs(left) + abs(right);
    return root->val + left + right - 1;
}

TreeNode* constructTree() {
    int val;
    string hasLeft, hasRight;
    cin >> val >> hasLeft;
    TreeNode* root = new TreeNode(val);
    if (hasLeft == "true") {
        root->left = constructTree();
    }
    cin >> hasRight;
    if (hasRight == "true") {
        root->right = constructTree();
    }
    return root;
}

int main() {
    TreeNode* root = constructTree();
    int moves = 0;
    distributeCoins(root, moves);
    cout << moves << endl;
    return 0;
}
