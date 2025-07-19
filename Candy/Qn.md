
# 135. Candy

[LeetCode Problem 135 – Candy](https://leetcode.com/problems/candy/)

## Problem Statement

There are **n** children standing in a line. Each child is assigned a rating value given in the integer array `ratings`.

You are giving candies to these children subject to the following requirements:

1. Each child must have **at least one candy**.
2. Children with a **higher rating** get **more candies than their neighbors**.

Return the **minimum number of candies** you need to distribute.

### Examples

**Example 1:**
```

Input: ratings = [1,0,2]
Output: 5
Explanation: Allocate [2,1,2] candies.

```

**Example 2:**
```

Input: ratings = [1,2,2]
Output: 4
Explanation: Allocate [1,2,1] candies; the last child gets only one candy since it doesn’t have a higher rating than its left neighbor.

```

### Constraints
- `n == ratings.length`
- `1 <= n <= 2 * 10^4`
- `0 <= ratings[i] <= 2 * 10^4`
```

