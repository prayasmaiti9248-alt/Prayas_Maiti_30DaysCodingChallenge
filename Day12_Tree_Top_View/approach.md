# Day 12 – Tree: Top View

## Approach

To find the top view of a binary tree:

1. Use BFS (Level Order Traversal)
2. Assign horizontal distance (hd) to each node:
   - Root = 0
   - Left = hd - 1
   - Right = hd + 1
3. Use a map to store the first node at each hd
4. Traverse using a queue
5. Print values in sorted order of hd

## Complexity

- Time Complexity: O(n log n)
- Space Complexity: O(n)

## Key Insight

The first node encountered at each horizontal distance during BFS
represents the top view.