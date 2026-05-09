
#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node;

node * insert(node * root,int val)
{
    if(root == nullptr)
    {
        node* temp = new node();

        temp->val = val;
        temp->left = nullptr;
        temp->right = nullptr;
        temp->ht = 0;

        return temp;
    }

    if(val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    int lh = (root->left) ? root->left->ht : -1;
    int rh = (root->right) ? root->right->ht : -1;

    root->ht = max(lh, rh) + 1;

    int balance = lh - rh;

    if(balance > 1 && val < root->left->val)
    {
        node* x = root->left;
        root->left = x->right;
        x->right = root;

        root->ht = max(
            (root->left ? root->left->ht : -1),
            (root->right ? root->right->ht : -1)
        ) + 1;

        x->ht = max(
            (x->left ? x->left->ht : -1),
            (x->right ? x->right->ht : -1)
        ) + 1;

        return x;
    }

    if(balance < -1 && val > root->right->val)
    {
        node* x = root->right;
        root->right = x->left;
        x->left = root;

        root->ht = max(
            (root->left ? root->left->ht : -1),
            (root->right ? root->right->ht : -1)
        ) + 1;

        x->ht = max(
            (x->left ? x->left->ht : -1),
            (x->right ? x->right->ht : -1)
        ) + 1;

        return x;
    }

    if(balance > 1 && val > root->left->val)
    {
        node* y = root->left;
        node* x = y->right;

        y->right = x->left;
        x->left = y;

        root->left = x;

        y->ht = max(
            (y->left ? y->left->ht : -1),
            (y->right ? y->right->ht : -1)
        ) + 1;

        x->ht = max(
            (x->left ? x->left->ht : -1),
            (x->right ? x->right->ht : -1)
        ) + 1;

        node* newRoot = root->left;

        root->left = newRoot->right;
        newRoot->right = root;

        root->ht = max(
            (root->left ? root->left->ht : -1),
            (root->right ? root->right->ht : -1)
        ) + 1;

        newRoot->ht = max(
            (newRoot->left ? newRoot->left->ht : -1),
            (newRoot->right ? newRoot->right->ht : -1)
        ) + 1;

        return newRoot;
    }

    if(balance < -1 && val < root->right->val)
    {
        node* y = root->right;
        node* x = y->left;

        y->left = x->right;
        x->right = y;

        root->right = x;

        y->ht = max(
            (y->left ? y->left->ht : -1),
            (y->right ? y->right->ht : -1)
        ) + 1;

        x->ht = max(
            (x->left ? x->left->ht : -1),
            (x->right ? x->right->ht : -1)
        ) + 1;

        node* newRoot = root->right;

        root->right = newRoot->left;
        newRoot->left = root;

        root->ht = max(
            (root->left ? root->left->ht : -1),
            (root->right ? root->right->ht : -1)
        ) + 1;

        newRoot->ht = max(
            (newRoot->left ? newRoot->left->ht : -1),
            (newRoot->right ? newRoot->right->ht : -1)
        ) + 1;

        return newRoot;
    }

    return root;
}