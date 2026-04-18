# Next Permutation of Strings

## Problem
Given an array of strings sorted lexicographically, generate the next permutation in lexicographical order.

---

## Approach

### Intuition:
To find the next permutation, identify the first position from the right where order breaks. Swap it with the next greater element and reverse the suffix to get the next smallest arrangement.

### Steps:
1. Find index `i` such that s[i] < s[i+1] from right
2. If not found, return 0 (no next permutation)
3. Find index `j` such that s[j] > s[i]
4. Swap s[i] and s[j]
5. Reverse from i+1 to end

---

## Complexity
- **Time:** O(n)  
- **Space:** O(1)

---

## Key Points
- Based on lexicographical ordering  
- Uses swap + reverse pattern  
- Core concept for permutation problems