# Dynamic Array

## Problem
Implement a dynamic array using nested sequences and process queries using bitwise XOR.

## Approach
- Maintain `N` sequences.
- For each query, calculate the sequence index using:
  `(x ^ lastAnswer) % N`
- For type 1 queries, append `y` to the selected sequence.
- For type 2 queries, retrieve the required value and update `lastAnswer`.
- Store each `lastAnswer` produced by a type 2 query.

## Example

For the sample queries, the output is:

7 3

## Complexity

- Time: O(N + Q)
- Space: O(N)

## HackerRank Result

Accepted.

![Accepted Result](02-result.png)