# Day 19 – Game of Two Stacks

## Problem Understanding

We are given two stacks of integers.

We can remove elements from the top of either stack, but:
- The sum of removed elements must not exceed maxSum
- Goal: maximize number of elements removed

---

## Approach

1. Start by taking elements from stack A until sum reaches limit
2. Store this as initial answer
3. Then iterate through stack B:
   - Add elements one by one
   - If sum exceeds maxSum:
       → remove elements from A (backtracking)
   - Update maximum count

---

## Key Idea

- Use **two pointers / greedy**
- Balance between stacks dynamically
- Always maintain valid sum

---

## Complexity

Time Complexity: O(n + m)  
Space Complexity: O(1)

---

## Key Learning

- Greedy + two pointer combination
- Backtracking when constraints break
- Maintaining running sum efficiently