
# [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

## Problem Statement

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

---

## Examples

**Example 1:**

```
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation: 
- "bat" has no other anagrams.  
- "nat" and "tan" are anagrams.  
- "ate", "eat", and "tea" are anagrams.
```

**Example 2:**

```
Input: strs = [""]
Output: [[""]]
```

**Example 3:**

```
Input: strs = ["a"]
Output: [["a"]]
```

---

## Constraints

* `1 <= strs.length <= 10^4`
* `0 <= strs[i].length <= 100`
* `strs[i]` consists of lowercase English letters.

