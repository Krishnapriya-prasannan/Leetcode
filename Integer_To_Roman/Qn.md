
# Integer to Roman (LeetCode #12)

[🔗 Problem Link](https://leetcode.com/problems/integer-to-roman/)

---

##  Problem Description

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Rules for Roman numeral formation:

- Symbols are placed in descending order from left to right.
- When a smaller symbol is placed before a larger one, it's subtracted (e.g., `IV` = 4, `IX` = 9).
- Only specific subtractive combinations are allowed:
  - 4: `IV`, 9: `IX`
  - 40: `XL`, 90: `XC`
  - 400: `CD`, 900: `CM`

Given an integer `num`, convert it to a Roman numeral.

---

##  Examples

**Example 1:**
```

Input: num = 3749
Output: "MMMDCCXLIX"
Explanation:

* 3000 = MMM
* 700 = DCC
* 40 = XL
* 9 = IX

```

**Example 2:**
```

Input: num = 58
Output: "LVIII"
Explanation: 50 + 5 + 3 = L + V + III

```

**Example 3:**
```

Input: num = 1994
Output: "MCMXCIV"
Explanation: 1000 + 900 + 90 + 4 = M + CM + XC + IV

```

---

##  Constraints

- `1 <= num <= 3999`

---

