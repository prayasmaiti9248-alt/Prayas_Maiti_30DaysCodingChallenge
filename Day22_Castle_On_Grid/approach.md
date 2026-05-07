# Day 22 – Castle on the Grid

## Problem Understanding

Given a grid with obstacles marked as 'X',

We need to find the minimum number of moves required to reach the goal from the start position.

Movement rule:
- You can move in straight lines (up, down, left, right)
- Continue moving until hitting a boundary or obstacle
- Each straight-line movement counts as ONE move

---

## Approach

1. Use BFS to find shortest path
2. Maintain a distance matrix initialized with -1
3. Start from initial cell and push into queue

4. For each cell:
   - Explore all 4 directions
   - Move continuously in that direction until:
       → boundary OR
       → obstacle ('X')

5. For each valid unvisited cell:
   - Update distance = current distance + 1
   - Push into queue

6. Stop when goal is reached

---

## Key Idea

- Even though movement spans multiple cells,
  it is counted as ONE move
- So treat each straight-line expansion as one BFS step

---

## Complexity

Time Complexity: O(n²)  
Space Complexity: O(n²)

---

## Key Learning

- BFS can be adapted for non-unit movements
- Grid traversal problems require careful boundary handling
- Efficient exploration in straight lines is key