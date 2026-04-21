# Day 7 – Median Updates

## Intuition
We need to maintain a dynamic data structure that supports:
- Insert
- Delete
- Median query

Sorting every time is inefficient.

---

## Approach (Two Balanced Sets)

We use two multisets:
- low → stores smaller half
- high → stores larger half

Maintain:
- Size difference ≤ 1
- max(low) ≤ min(high)

---

## Steps

### Add Operation
- If x <= max(low) → insert in low
- Else → insert in high

### Remove Operation
- Remove x from whichever set it exists
- If not found → print "Wrong!"

### Rebalance
- If size difference > 1:
  - Move element between sets

### Median Calculation
- If sizes unequal → top of larger set
- If equal → average of both tops

---

## Complexity

- Insert: O(log n)
- Delete: O(log n)
- Median: O(1)

---

## Key Concepts

- Multiset (balanced BST)
- Two heap technique
- Dynamic median maintenance