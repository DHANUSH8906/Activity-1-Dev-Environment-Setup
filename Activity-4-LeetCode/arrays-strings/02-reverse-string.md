## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

The solution uses a two-pointer approach. One pointer starts at the beginning
of the string and the other starts at the end. The characters at both positions
are swapped, and the pointers move toward the center until the string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the character array in place, so no additional string or
array is required. The local tests included a typical case with multiple
characters and an edge case with a single character.