# Day 29 – Array Pairs

## Problem Understanding

We need to count valid pairs in the array based on:
- Maximum element relationships
- Division/product constraints

A brute force approach would be too slow for large inputs.

---

## Approach

1. Build a Sparse Table
   - Used for fast maximum index queries in any range

2. Build a Merge Sort Tree
   - Each segment stores sorted values
   - Helps count values ≤ limit efficiently

3. Use Divide & Conquer
   - Find maximum element in current range
   - Solve left and right halves recursively

4. Count crossing pairs
   - Use binary search on Merge Sort Tree
   - Query efficiently instead of brute force

---

## Key Idea

- Maximum element splits the problem naturally
- Sparse Table gives O(1) RMQ
- Merge Sort Tree enables fast counting queries
- Combining advanced structures improves performance greatly

---

## Complexity

Time Complexity: O(n log² n)  
Space Complexity: O(n log n)

---

## Key Learning

- Sparse Table is powerful for range maximum queries
- Merge Sort Tree combines segment trees with binary search
- Divide & Conquer can reduce complex pair counting efficiently
- Advanced data structures work well together