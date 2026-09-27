## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

The solution uses a brute-force approach with two nested loops. 
For each element, we check the elements that come after it to find 
a pair whose sum equals the target value. Once the pair is found, 
their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution returns the indices of the two numbers that add up to 
the target. The local tests included a typical case and a duplicate 
value edge case before submitting the solution to LeetCode.