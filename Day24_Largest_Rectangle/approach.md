# Day 24 – Largest Rectangle

## Problem Understanding

We are given histogram bar heights.

Goal:
Find the maximum rectangular area possible inside the histogram.

---

## Approach

1. Use a monotonic increasing stack
2. Store indices of bars
3. Traverse all bars:
   - If current bar is taller → push index
   - If current bar is smaller:
       → pop taller bars
       → calculate area
4. Width is determined using:
   - current index as right boundary
   - stack top as left boundary
5. Track maximum area

---

## Key Idea

- Every popped bar becomes the smallest height in its rectangle
- Stack helps find nearest smaller elements efficiently

---

## Complexity

Time Complexity: O(n)  
Space Complexity: O(n)

---

## Key Learning

- Monotonic stacks are extremely useful in array problems
- Boundary calculations are crucial
- Efficient stack handling avoids O(n²) brute force