# Day 6 – Sparse Arrays

## Intuition
We need to count how many times each query string appears in the given list.

A brute force approach would compare each query with every string → O(n * q), which is inefficient.

Instead, we use a hashmap to store frequencies and answer queries in constant time.

---

## Approach

1. Create an unordered_map<string, int> to store frequencies.
2. Traverse the stringList:
   - Increment count of each string.
3. Traverse queries:
   - For each query, get its count from the map.
4. Store results in a vector and return.

---

## Complexity

- Time Complexity: O(n + q)
- Space Complexity: O(n)

---

## Key Concept

- Hashing (unordered_map)
- Frequency counting