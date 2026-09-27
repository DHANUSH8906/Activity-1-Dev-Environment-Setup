## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

The solution moves all non-zero elements to the front of the array while
maintaining their original order. After all non-zero elements are placed,
the remaining positions are filled with zeros.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in place without using an additional array.
The local tests included a typical case with zeros between non-zero elements
and an edge case where all elements are zero.