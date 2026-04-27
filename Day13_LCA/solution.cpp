#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* lca(Node* root, int v1, int v2) {
    while (root != NULL) {
        if (v1 < root->data && v2 < root->data) {
            root = root->left;
        }
        else if (v1 > root->data && v2 > root->data) {
            root = root->right;
        }
        else {
            return root;
        }
    }
    return NULL;
}

int main() {
    // Example usage (optional for testing)
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);

    Node* ans = lca(root, 5, 15);
    if (ans) cout << ans->data;

    return 0;
}