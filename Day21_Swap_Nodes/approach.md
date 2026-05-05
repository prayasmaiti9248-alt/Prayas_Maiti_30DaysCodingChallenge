## Approach

The problem involves performing swap operations on a binary tree at specific depths.

1. Tree Representation:
- The tree is stored using a 2D vector where each node has left and right children.
- Indexing is done from 1 to n for convenience.

2. Swap Logic:
- For each query value k:
  - Traverse the tree recursively.
  - At every depth where (depth % k == 0), swap the left and right children of that node.

3. Traversal:
- After each swap operation, perform an inorder traversal.
- Store the traversal result.

4. Repeat:
- Perform the above steps for all queries.

## Complexity

- Each query takes O(n) time (full traversal).
- Total complexity: O(n * q)

## Key Insight

Instead of rebuilding the tree each time, we modify it in-place and reuse it across queries.