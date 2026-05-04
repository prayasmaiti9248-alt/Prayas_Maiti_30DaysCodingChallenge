# Day 20 – Balanced Brackets

## Problem Understanding

Given a string containing brackets:
(), {}, []

We need to determine if the brackets are balanced.

---

## Approach

1. Use a stack to track opening brackets
2. Traverse the string:
   - If opening bracket → push to stack
   - If closing bracket:
       → check if stack is empty (invalid)
       → check if top matches
       → if not → invalid
3. At end:
   - If stack is empty → valid
   - Else → invalid

---

## Key Idea

- LIFO (Last In First Out) perfectly matches bracket pairing
- Every closing bracket must match the most recent opening bracket

---

## Complexity

Time Complexity: O(n)  
Space Complexity: O(n)

---

## Key Learning

- Stack is ideal for nested structure problems
- Order matters in matching problems
- Simple data structures can solve complex validations