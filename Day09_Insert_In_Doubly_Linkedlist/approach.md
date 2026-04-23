# Day 09 - Insert Node into Sorted Doubly Linked List

## Approach

We are given a sorted doubly linked list and need to insert a node while maintaining sorted order.

### Steps:

1. Create a new node.
2. If list is empty → return new node.
3. If new value is smaller than head:
   - Insert at beginning.
4. Traverse list to find correct position.
5. Insert node:
   - Update next and prev pointers carefully.
6. Return head.

### Edge Cases:
- Empty list
- Insert at head
- Insert at tail

### Complexity:
- Time: O(n)
- Space: O(1)