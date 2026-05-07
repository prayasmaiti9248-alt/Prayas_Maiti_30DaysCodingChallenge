# Day 23 – Down to Zero II

## Problem Understanding

We need to reduce a number `n` to `0` using minimum moves.

Allowed moves:
1. Replace `n` with `max(a, b)` where `a × b = n`
2. Decrease `n` by `1`

Goal: Find minimum operations.

---

## Approach

1. Use BFS because every move has equal cost
2. Start BFS from `n`
3. For every current number:
   - Try `curr - 1`
   - Try all valid factor pairs
4. Push unvisited states into queue
5. First time reaching `0` gives minimum answer

---

## Key Idea

- Numbers act like graph nodes
- BFS guarantees shortest path
- Visited array prevents repeated processing

---

## Complexity

Time Complexity: O(n √n)  
Space Complexity: O(n)

---

## Key Learning

- BFS can solve shortest-operation problems
- State-space traversal is very useful
- Factor generation optimization matters