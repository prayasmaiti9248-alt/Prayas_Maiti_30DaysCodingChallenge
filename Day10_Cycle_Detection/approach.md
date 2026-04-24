# Day 10 - Detect Cycle in Linked List

## Approach

We use Floyd’s Cycle Detection Algorithm (Tortoise & Hare).

### Steps:

1. Initialize two pointers:
   - slow moves one step
   - fast moves two steps

2. Traverse the list:
   - If fast reaches NULL → no cycle
   - If slow == fast → cycle exists

### Key Insight:
If there is a loop, fast pointer will eventually meet slow pointer.

### Complexity:
- Time: O(n)
- Space: O(1)