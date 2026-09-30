# Time Conversion

## Problem
Convert a time from 12-hour AM/PM format to 24-hour military time.

## Approach
- Read the hour from the input string.
- If the time is AM and the hour is 12, change it to 00.
- If the time is PM and the hour is not 12, add 12 to the hour.
- Remove the AM/PM portion from the final string.

## Example

Input:

07:05:45PM

Output:

19:05:45

## Complexity

- Time: O(1)
- Space: O(1)

## HackerRank Result

Accepted.

![Accepted Result](03-result.png)