
#  Search in Rotated Sorted Array (LeetCode #33)

[🔗 Problem Link](https://leetcode.com/problems/search-in-rotated-sorted-array/)

---

##  Problem Description

There is an integer array `nums` sorted in **ascending order** (with **distinct values**), which may have been **rotated** at an unknown pivot index `k` (1 ≤ k < nums.length).

The array becomes:
```

\[nums\[k], nums\[k+1], ..., nums\[n-1], nums\[0], nums\[1], ..., nums\[k-1]]

```

Given the rotated array `nums` and an integer `target`, return the **index** of `target` if it exists in `nums`, or **-1** if it does not.

You must write an algorithm with **O(log n)** runtime complexity.

---

##  Examples

### Example 1
**Input:**  
`nums = [4,5,6,7,0,1,2]`, `target = 0`  
**Output:**  
`4`

### Example 2  
**Input:**  
`nums = [4,5,6,7,0,1,2]`, `target = 3`  
**Output:**  
`-1`

### Example 3  
**Input:**  
`nums = [1]`, `target = 0`  
**Output:**  
`-1`

---

##  Constraints
- `1 <= nums.length <= 5000`
- `-10⁴ <= nums[i] <= 10⁴`
- All values of `nums` are **unique**
- `nums` is a rotated sorted array
- `-10⁴ <= target <= 10⁴`
```

