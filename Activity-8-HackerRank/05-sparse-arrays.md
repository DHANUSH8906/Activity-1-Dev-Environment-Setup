# Sparse Arrays

## Problem
Given a list of strings and a list of query strings, determine how many times each query string occurs in the original list.

## Approach
- Process each query string one at a time.
- Compare the query with every string in the original list.
- Increment the count whenever the strings match.
- Store the count for each query.

## Example

Strings:

aba  
baba  
aba  
xzxb

Queries:

aba  
xzxb  
ab

Output:

2 1 0

## Complexity

- Time: O(N × Q)
- Space: O(Q)

## HackerRank Result

Accepted.

![Accepted Result](05-result.png)