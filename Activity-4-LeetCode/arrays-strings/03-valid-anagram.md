## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

The solution uses a frequency-counting array of size 26 to count the
occurrences of each lowercase English letter. The counts are increased
for characters in the first string and decreased for characters in the
second string. If all counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution assumes lowercase English letters as specified by the
problem. Using a fixed array of 26 counters avoids the need for sorting
the strings and allows the solution to run in linear time.