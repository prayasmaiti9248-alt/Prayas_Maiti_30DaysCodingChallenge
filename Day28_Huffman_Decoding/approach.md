# Day 28 – Tree: Huffman Decoding

## Problem Understanding

Given:
- A Huffman encoded binary string
- A Huffman Tree

We need to decode the binary string back into the original text.

Traversal rules:
- `0` → move left
- `1` → move right

Whenever a leaf node is reached, one character is decoded.

---

## Approach

1. Start traversal from the root node
2. Traverse the binary string:
   - If current bit is `0` → move left
   - Else → move right
3. If a leaf node is reached:
   - Add character to answer
   - Reset current node back to root
4. Continue until entire string is processed

---

## Key Idea

- Huffman Tree stores characters only at leaf nodes
- Every valid path from root to leaf represents one character encoding

---

## Complexity

Time Complexity: O(n)  
Space Complexity: O(1)

---

## Key Learning

- Trees can represent compressed encodings efficiently
- Leaf node detection is essential in traversal problems
- Huffman Coding combines greedy concepts with trees