## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

The solution uses binary search on the sorted array. Two pointers represent
the current search range, and the middle element is checked against the target.
If the middle element is smaller or larger than the target, half of the search
range is eliminated.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted. The local tests included
a typical case where the target is present and an edge case where the target
is not found.