#  Remove Element (LeetCode #27)

[🔗 Problem Link](https://leetcode.com/problems/remove-element/)

---

##  Problem Description

Given an integer array `nums` and an integer `val`, **remove all occurrences** of `val` in-place and return the number of elements not equal to `val`.

The order of elements can be changed. It doesn't matter what values are set beyond the returned length.

---

##  Examples

### Example 1
**Input:**  
`nums = [3,2,2,3]`, `val = 3`  
**Output:**  
`2, nums = [2,2,_,_]`  
**Explanation:** First two elements of `nums` are `2`, which are not equal to `val = 3`.

---

### Example 2
**Input:**  
`nums = [0,1,2,2,3,0,4,2]`, `val = 2`  
**Output:**  
`5, nums = [0,1,4,0,3,_,_,_]`  
**Explanation:** First five elements are not `2`. Order does not matter.

---

##  Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

---

