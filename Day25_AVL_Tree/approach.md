# Day 25 – Self Balancing Tree (AVL Tree)

## Problem Understanding

We need to insert nodes into an AVL Tree.

After every insertion:
- BST property must remain valid
- Tree must stay balanced

Balance condition:
|height(left) - height(right)| ≤ 1

---

## Approach

1. Perform normal BST insertion
2. Update height of current node
3. Calculate balance factor
4. Detect imbalance cases:
   - LL Case
   - RR Case
   - LR Case
   - RL Case
5. Apply appropriate rotations
6. Return updated root

---

## Key Idea

- AVL Tree automatically balances itself
- Rotations maintain logarithmic height
- Balance factor determines required rotation

---

## Complexity

Time Complexity: O(log n)  
Space Complexity: O(log n)

---

## Key Learning

- Self-balancing trees improve efficiency
- Rotations are core AVL concepts
- Height maintenance is very important