

# Intuition

The two input arrays `nums1` and `nums2` are already sorted. We need to merge them into `nums1` in sorted order. Instead of merging from the front (which might overwrite valid data), we can merge from the **back** since `nums1` has enough space to hold all elements.

---

# Approach

* Use three pointers:

  * `i` for the last initialized element in `nums1` (`m - 1`)
  * `j` for the last element in `nums2` (`n - 1`)
  * `k` for the last index in `nums1` (`m + n - 1`)
* Compare elements from the back of both arrays and place the larger one at position `k` in `nums1`.
* Decrease the pointers accordingly.
* After the loop, if any elements are left in `nums2`, copy them to the beginning of `nums1`.

This ensures an in-place merge without needing extra space.

---

# Complexity

* **Time complexity:** $O(m + n)$
  We iterate through all elements in both arrays once.
* **Space complexity:** $O(1)$
  We use only constant extra space (three pointers).

---

