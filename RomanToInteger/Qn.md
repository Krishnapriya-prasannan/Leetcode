
#  Roman to Integer (LeetCode #13)

[🔗 Problem Link](https://leetcode.com/problems/roman-to-integer/)

---

##  Problem Description

Roman numerals are represented by seven symbols:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are usually written from largest to smallest left to right. However, when a smaller numeral appears before a larger one, it is subtracted. These are the six subtractive cases:
- I before V (5) and X (10) → 4 and 9
- X before L (50) and C (100) → 40 and 90
- C before D (500) and M (1000) → 400 and 900

**Goal:** Convert a valid Roman numeral string `s` to its corresponding integer value.

---

##  Examples

**Example 1:**
```

Input: s = "III"
Output: 3
Explanation: III = 1 + 1 + 1 = 3

```

**Example 2:**
```

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V = 5, III = 3 → 50 + 5 + 3 = 58

```

**Example 3:**
```

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90, IV = 4

```

---

##  Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters `'I', 'V', 'X', 'L', 'C', 'D', 'M'`
- It is guaranteed to be a valid Roman numeral in the range `[1, 3999]`

---

