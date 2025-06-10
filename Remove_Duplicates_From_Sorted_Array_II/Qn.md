

# Remove Duplicates from Sorted Array II

[LeetCode Problem 80 - Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

##  Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove some duplicates **in-place** such that **each unique element appears at most twice**. The relative order of the elements should be kept the same.

Since it's impossible to change the length of the array in some languages, you must place the result in the **first part** of the array `nums`. More formally, if there are `k` elements after removing duplicates, the first `k` elements of `nums` should hold the final result. It does **not matter** what you leave beyond the first `k` elements.

You **must not** allocate extra space for another array. Modify the input array in-place with **O(1)** extra memory.

###  Custom Judge

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

###  Example 1:

**Input:**
`nums = [1,1,1,2,2,3]`
**Output:**
`5, nums = [1,1,2,2,3,_]`

**Explanation:** Your function should return `k = 5`, with the first five elements of `nums` being `[1, 1, 2, 2, 3]`.

---

###  Example 2:

**Input:**
`nums = [0,0,1,1,1,1,2,3,3]`
**Output:**
`7, nums = [0,0,1,1,2,3,3,_,_]`

**Explanation:** The function returns `k = 7`, and the array contains `[0, 0, 1, 1, 2, 3, 3]`.

---

