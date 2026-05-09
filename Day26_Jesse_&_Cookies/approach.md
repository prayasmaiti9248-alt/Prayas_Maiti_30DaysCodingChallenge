# Day 26 – Jesse and Cookies

## Problem Understanding

Given cookies with different sweetness levels and a target sweetness `k`:

- Combine the two least sweet cookies using:

  newSweetness = least + 2 × secondLeast

- Continue until every cookie has sweetness ≥ `k`
- Return minimum operations needed

---

## Approach

1. Store all cookies in a multiset
2. While smallest cookie < `k`:
   - Extract two minimum elements
   - Create new cookie
   - Insert back into multiset
   - Increment operation count
3. If minimum sweetness reaches `k` → return operations
4. Otherwise return `-1`

---

## Key Idea

- Always combining the two smallest cookies gives the optimal answer
- Ordered containers allow efficient minimum retrieval

---

## Complexity

Time Complexity: O(n log n)  
Space Complexity: O(n)

---

## Key Learning

- Greedy strategies often rely on local optimal choices
- Multiset / min-heap are powerful for repeated minimum operations
- Efficient data structures reduce repeated sorting overhead