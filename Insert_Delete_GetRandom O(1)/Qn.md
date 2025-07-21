

# Problem: Design RandomizedSet

**LeetCode Link:**
[https://leetcode.com/problems/insert-delete-getrandom-o1/](https://leetcode.com/problems/insert-delete-getrandom-o1/)

---

##  Problem Statement

Implement the `RandomizedSet` class:

* `RandomizedSet()` Initializes the `RandomizedSet` object.
* `bool insert(int val)` Inserts an item `val` into the set if not already present. Returns `true` if the item was not present, `false` otherwise.
* `bool remove(int val)` Removes an item `val` from the set if present. Returns `true` if the item was present, `false` otherwise.
* `int getRandom()` Returns a random element from the current set of elements. Each element must have the same probability of being returned.

You **must implement** the functions such that each function works in **average O(1)** time complexity.

---

##  Example 1

```
Input
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[], [1], [2], [2], [], [1], [2], []]

Output
[null, true, false, true, 2, true, false, 2]
```

**Explanation:**

```text
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1);      // Inserts 1, returns true.
randomizedSet.remove(2);      // 2 not present, returns false.
randomizedSet.insert(2);      // Inserts 2, returns true. Set = [1, 2]
randomizedSet.getRandom();    // Returns either 1 or 2 randomly.
randomizedSet.remove(1);      // Removes 1, returns true. Set = [2]
randomizedSet.insert(2);      // 2 already in set, returns false.
randomizedSet.getRandom();    // Only 2 in set, returns 2.
```

---

##  Constraints

* \$-2^{31} \leq \text{val} \leq 2^{31} - 1\$
* At most \$2 \times 10^5\$ calls will be made to `insert`, `remove`, and `getRandom`.
* There will be **at least one element** in the data structure when `getRandom` is called.

