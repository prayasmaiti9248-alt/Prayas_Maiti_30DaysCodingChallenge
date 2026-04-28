# Day 14 – Queue using Two Stacks

## Approach

We use two stacks:
- Input stack (is) → for enqueue
- Output stack (os) → for dequeue/peek

### Steps:

1. Enqueue:
   - Push element into input stack

2. Dequeue:
   - If output stack is empty:
       transfer all elements from input stack to output stack
   - Pop from output stack

3. Print:
   - If output stack is empty:
       transfer elements
   - Print top of output stack

## Complexity

- Amortized Time Complexity: O(1)
- Space Complexity: O(n)

## Key Insight

Reversing elements using a second stack helps maintain FIFO order.