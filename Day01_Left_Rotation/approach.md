#  Left Rotation of an Array

##  Problem
Rotate an array to the left by `d` positions.

---

##  Approach (In-Place)
- Let `n = size of array`
- Compute: `r = d % n`
- Repeat `r` times:
  - Store first element
  - Remove it from front
  - Append it to the end

---

##  Complexity
- **Time:** O(n × r)  
- **Space:** O(1)

---

##  Key Points
- Modulo avoids unnecessary full rotations  
- Achieves rotation without extra space  
- Demonstrates time vs space trade-off