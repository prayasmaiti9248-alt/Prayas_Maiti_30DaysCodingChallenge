# Day 8 – Substring Diff

## Intuition
We need to find the longest substring between two strings such that the number of mismatches is at most k.

A brute force approach would check all substrings, which is inefficient.

---

## Approach (Sliding Window + Diagonal Traversal)

Instead of comparing all substrings:
- Fix a diagonal alignment between s1 and s2
- Apply sliding window on that alignment

---

## Steps

1. Iterate over all possible shifts (d)
2. For each shift:
   - Align s1[i] with s2[j]
3. Use sliding window:
   - Expand right pointer
   - Count mismatches
4. If mismatches > k:
   - Move left pointer
5. Track maximum window length

---

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

---

## Key Concepts

- Sliding Window
- Two Pointers
- String Alignment (Diagonal Traversal)