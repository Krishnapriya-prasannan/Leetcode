#  Valid Anagram (LeetCode #242)

[🔗 Problem Link](https://leetcode.com/problems/valid-anagram/)

---

##  Problem Description

Given two strings `s` and `t`, return `true` if `t` is an **anagram** of `s`, and `false` otherwise.

An **anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

---

##  Examples

### Example 1

**Input:**  
`s = "anagram", t = "nagaram"`  
**Output:**  
`true`

### Example 2

**Input:**  
`s = "rat", t = "car"`  
**Output:**  
`false`

---

##  Constraints

- `1 <= s.length, t.length <= 5 * 10⁴`
- `s` and `t` consist of lowercase English letters only.

---

##  Follow-up

What if the inputs contain **Unicode characters**?

➡ You could use a **hash map (dictionary)** instead of a fixed-size array, which allows for dynamic key handling of all Unicode characters. In Python, you can use `collections.Counter` for an efficient and concise solution.
