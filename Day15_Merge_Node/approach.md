# Day 15 – Find Merge Point of Two Lists

## Problem
Given two singly linked lists that merge at some point, return the data value of the node where they merge.

---

## Approach

We use the **Two Pointer Technique**:

- Initialize two pointers:
  - `p1` at head of list1
  - `p2` at head of list2

- Traverse both lists:
  - Move each pointer one step at a time
  - If a pointer reaches `NULL`, redirect it to the head of the other list

- Continue until:
  - `p1 == p2` → this is the merge point

---

## Intuition

- Each pointer travels both lists once  
- Total distance covered = `length1 + length2`  
- This equalizes the path length without explicitly calculating sizes  

---

## Complexity

- Time Complexity: **O(n + m)**
- Space Complexity: **O(1)**

---

## Key Points

- No extra space required  
- No need to calculate lengths  
- Works because both pointers sync after switching  



