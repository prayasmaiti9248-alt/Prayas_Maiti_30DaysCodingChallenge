# Equal Stacks

## Problem
Given three stacks of cylinders, find the maximum possible equal height by removing cylinders from the top.

---

## Approach (Greedy)

### Intuition:
To make all stacks equal, we can only remove elements from the top.  
So, at each step, reduce the height of the tallest stack until all heights match.

### Steps:
1. Compute total heights of all three stacks
2. Initialize pointers for each stack (top index)
3. While true:
   - If all heights are equal → return height
   - Remove top element from the stack with maximum height
   - Update its total height

---

## Complexity
- **Time:** O(n1 + n2 + n3)  
- **Space:** O(1)

---

## Key Points
- Greedy approach: always reduce the tallest stack  
- No need to try all combinations  
- Efficient due to single traversal