# Day 17 – Flatland Space Stations

## Problem
Given n cities and positions of space stations, find the maximum distance any city is from its nearest space station.

---

## Approach

1. Sort the space station indices
2. Compute:
   - Distance from first city to first station
   - Distance from last station to last city
3. For every pair of consecutive stations:
   - Find gap = (c[i] - c[i-1]) / 2
4. Take maximum among all distances

---

## Intuition

- Cities between two stations:
  - Farthest point lies in the middle
- Edge cities:
  - Distance is direct to nearest station

---

## Complexity

- Time Complexity: **O(k log k)**
- Space Complexity: **O(1)**

---

## Key Points

- Sorting is crucial  
- Max gap determines answer  
- Handle edge cases carefully  

---

## Conclusion

By analyzing gaps between stations and edge distances, we can efficiently compute the maximum distance using a greedy approach.