#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void insert(Node *&root, int val) {
    if (!root) {
        root = new Node(val);
        return;
    }
    if (val < root->data)
        insert(root->left, val);
    else
        insert(root->right, val);
}

Node *inorderSuccessor(Node *node) {
    Node *curr = node->right;
    while (curr && curr->left)
        curr = curr->left;
    return curr;
}

Node *deleteNode(Node *root, int key) {
    if (!root) return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node *temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *temp = inorderSuccessor(root);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void preorder(Node *root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        Node *root = nullptr;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            insert(root, val);
        }
        cin >> m;
        vector<int> to_delete(m);
        for (int i = 0; i < m; ++i)
            cin >> to_delete[i];
        for (int i = 0; i < m; ++i)
            root = deleteNode(root, to_delete[i]);
        preorder(root);
        cout << endl;
    }
    return 0;
}
