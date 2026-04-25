#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

int high(Node* node) {
    if (node == NULL) return 0;
    return 1 + max(high(node->left), high(node->right));
}

void print(Node* root, int level) {
    if (root == NULL) return;

    if (level == 1) {
        cout << root->data << " ";
    } else {
        print(root->left, level - 1);
        print(root->right, level - 1);
    }
}

void levelOrder(Node* root) {
    int h = high(root);

    for (int i = 1; i <= h; i++) {
        print(root, i);
    }
}