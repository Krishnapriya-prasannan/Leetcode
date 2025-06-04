
#  Remove Duplicates from Sorted Array (LeetCode #26)

[🔗 Problem Link](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

---

##  Problem Description

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Return the number of unique elements `k` after removing duplicates.

Modify the array `nums` such that the first `k` elements contain the unique elements in the order they were originally present. The values beyond the first `k` elements do not matter.

---

##  Examples

**Example 1:**
```

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: The function returns k = 2, with the first two elements being 1 and 2.
Elements after k are not important.

```

**Example 2:**
```

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,*,*,*,*,_]
Explanation: The function returns k = 5, with the first five elements as 0,1,2,3,4.
Elements after k are not important.

```

---

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

---

