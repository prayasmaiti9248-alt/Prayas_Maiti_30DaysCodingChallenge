# Day 27 – Array Manipulation

## Problem Understanding

Given multiple queries on an array:

- Add value `k` to all elements from index `a` to `b`
- After performing all operations, find the maximum value in the array

Directly updating every element for each query would be too slow.

---

## Approach

1. Create a difference array initialized with 0
2. For every query:
   - Add `k` at index `a`
   - Subtract `k` at index `b + 1`
3. Traverse the array using prefix sums
4. Track the maximum value during traversal

---

## Key Idea

- Instead of updating every element in a range,
  mark only the start and end effect
- Prefix sums reconstruct the final updated array efficiently

---

## Complexity

Time Complexity: O(n + q)  
Space Complexity: O(n)

---

## Key Learning

- Difference arrays are powerful for range updates
- Prefix sums help rebuild cumulative effects
- Optimization techniques are essential for large constraints