# Day 13 – BST: Lowest Common Ancestor

## Approach

Using BST properties:

1. Start from root
2. If both values are smaller → go left
3. If both values are greater → go right
4. Otherwise → current node is LCA

## Complexity

- Time Complexity: O(h)
- Space Complexity: O(1)

## Key Insight

BST property allows us to avoid traversing the entire tree.
We can directly move towards the LCA.