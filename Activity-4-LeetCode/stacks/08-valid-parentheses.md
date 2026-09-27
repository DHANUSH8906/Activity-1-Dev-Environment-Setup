## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

The solution uses a stack to keep track of opening brackets. When a closing
bracket is encountered, it is compared with the most recent opening bracket
from the stack. If the brackets do not match, the string is invalid.

After processing the entire string, the stack must be empty for the string
to be valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The solution handles the three types of brackets: parentheses, square
brackets, and curly brackets. The local tests included a typical case with
matching brackets and an edge case with mismatched brackets.