#include <bits/stdc++.h>
using namespace std;

void swapAtDepth(int node, int k, int depth, vector<vector<int>> &tree) {
    if (node == -1) return;

    if (depth % k == 0) {
        swap(tree[node][0], tree[node][1]);
    }

    swapAtDepth(tree[node][0], k, depth + 1, tree);
    swapAtDepth(tree[node][1], k, depth + 1, tree);
}

void inorder(int node, vector<vector<int>> &tree, vector<int> &res) {
    if (node == -1) return;

    inorder(tree[node][0], tree, res);
    res.push_back(node);
    inorder(tree[node][1], tree, res);
}

vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) {
    int n = indexes.size();

    // 1-based indexing
    vector<vector<int>> tree(n + 1, vector<int>(2));

    for (int i = 1; i <= n; i++) {
        tree[i][0] = indexes[i - 1][0];
        tree[i][1] = indexes[i - 1][1];
    }

    vector<vector<int>> result;

    for (int k : queries) {
        swapAtDepth(1, k, 1, tree);

        vector<int> temp;
        inorder(1, tree, temp);
        result.push_back(temp);
    }

    return result;
}