# Day 18 – Number Line Jumps (Kangaroo)

## Problem Understanding

Two kangaroos start at different positions on a number line.

Given constraint:
x1 < x2 → Kangaroo 1 always starts behind Kangaroo 2

We need to determine if they will land at the same location after the same number of jumps.

---

## Approach

Position after n jumps:
Kangaroo 1 → x1 + n * v1  
Kangaroo 2 → x2 + n * v2  

For them to meet:
x1 + n*v1 = x2 + n*v2  

Solving:
n = (x2 - x1) / (v1 - v2)

---

## Key Observations

1. Since x1 < x2:
   → Kangaroo 1 must be faster to catch up  
   → If v1 <= v2 → impossible  

2. If (x2 - x1) is divisible by (v1 - v2):
   → They land on same position → YES  

3. Otherwise:
   → They never meet → NO  

---

## Complexity

Time Complexity: O(1)  
Space Complexity: O(1)

---

## Key Learning

- Using constraints simplifies logic significantly
- Relative speed determines possibility
- Converting movement problems into equations avoids brute force