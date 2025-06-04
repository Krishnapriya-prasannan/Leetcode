
#  Happy Number (LeetCode #202)

[🔗 Problem Link](https://leetcode.com/problems/happy-number/)

---

##  Problem Description

A **happy number** is defined by the following process:

1. Start with any **positive integer**.
2. Replace the number by the **sum of the squares of its digits**.
3. Repeat the process.
4. If the number eventually becomes `1`, it's a **happy number**.
5. If it loops endlessly in a cycle that **does not include 1**, then it's **not a happy number**.

Return `true` if `n` is a happy number, and `false` if not.

---

##  Examples

**Example 1:**
```

Input: n = 19
Output: true
Explanation:
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1 → Happy Number

```

**Example 2:**
```

Input: n = 2
Output: false

```

---

##  Constraints

- `1 <= n <= 2³¹ - 1`

---

