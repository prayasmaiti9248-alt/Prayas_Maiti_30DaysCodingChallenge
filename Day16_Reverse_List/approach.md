# Day 16 – Reverse a Doubly Linked List

## Problem
Given a doubly linked list, reverse it and return the new head.

---

## Approach

We traverse the list and swap the `next` and `prev` pointers of each node.

Steps:
1. Initialize a pointer `curr` at head
2. For each node:
   - Swap `next` and `prev`
   - Move to next node using updated pointer (`curr = curr->prev`)
3. Update head during traversal

---

## Intuition

- Reversing a doubly linked list is simpler than singly because:
  - Each node already has a `prev` pointer
- By swapping pointers, direction of list is reversed

---

## Complexity

- Time Complexity: **O(n)**
- Space Complexity: **O(1)**

---

## Key Points

- No extra space required  
- In-place reversal  
- Careful pointer updates avoid breaking links  

---

## Conclusion

Swapping `next` and `prev` for each node efficiently reverses the doubly linked list in linear time.