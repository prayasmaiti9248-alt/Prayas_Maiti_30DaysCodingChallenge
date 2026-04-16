# Print Linked List in Reverse

## Problem
Given the head of a singly linked list, print its elements in reverse order.

---

## Approach (Recursion)

### Intuition:
Since a singly linked list allows only forward traversal, recursion is used to reach the end first. While returning from recursive calls, elements are printed in reverse order.

### Steps:
1. If current node is NULL, return
2. Recursively call function for next node
3. Print current node’s data while returning

---

## Complexity
- **Time:** O(n)  
- **Space:** O(n) (recursion stack)

---

## Key Points
- Uses recursion to simulate reverse traversal  
- No modification to the linked list  
- Call stack acts as implicit storage