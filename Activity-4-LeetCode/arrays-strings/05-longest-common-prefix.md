## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The solution uses the first string as a reference and compares each of
its characters with the corresponding character in all the other strings.
When a mismatch or the end of a string is reached, the common prefix
found so far is returned.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

The solution handles the case where there is no common prefix by returning
an empty string. The local tests included a typical case with the common
prefix "fl" and an edge case where the strings have no common prefix.