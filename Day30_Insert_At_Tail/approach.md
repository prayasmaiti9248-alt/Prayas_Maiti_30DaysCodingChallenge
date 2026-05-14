# Day 30 – Insert a Node at the Tail of a Linked List

## Problem Understanding

We are given:
- Head of a singly linked list
- A value to insert

We need to insert the new node at the end of the list.

---

## Approach

1. Create a new node with given data
2. If list is empty:
   - Return the new node as head
3. Otherwise:
   - Traverse till last node
4. Connect last node to new node
5. Return head

---

## Key Idea

- Tail insertion requires traversal to the last node
- Proper pointer linking is important
- Edge case: empty linked list

---

## Complexity

Time Complexity: O(n)  
Space Complexity: O(1)

---

## Key Learning

- Learned linked list traversal
- Practiced pointer manipulation
- Understood tail insertion operation