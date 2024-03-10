#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

bool checkBSTUtil(Node* node, int minValue, int maxValue) {
    if (node == NULL)
        return true;

    if (node->data < minValue || node->data > maxValue)
        return false;

    return (checkBSTUtil(node->left, minValue, node->data - 1) &&
            checkBSTUtil(node->right, node->data + 1, maxValue));
}

bool checkBST(Node* root) {
    return checkBSTUtil(root, INT_MIN, INT_MAX);
}

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int main() {
    Node *root = newNode(20);
    root->left = newNode(10);
    root->right = newNode(30);
    root->left->left = root->left->right = NULL;
    root->right->left = newNode(5);
    root->right->right = newNode(40);

    if (checkBST(root))
        cout << "true\n";
    else
        cout << "false\n";
    return 0;
}
