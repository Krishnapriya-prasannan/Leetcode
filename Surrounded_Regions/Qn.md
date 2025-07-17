

###  **Problem: Surrounded Regions**

**LeetCode Link:** [https://leetcode.com/problems/surrounded-regions/](https://leetcode.com/problems/surrounded-regions/)

---

### 🔹 Problem Description:

You are given an `m x n` matrix `board` containing characters `'X'` and `'O'`.
Your task is to **capture all regions that are surrounded by `'X'`**.

A **region** is captured by flipping all `'O'`s into `'X'`s in that surrounded region.

---

### 🔹 Definitions:

* **Connect:** Cells are connected if they are adjacent **horizontally or vertically**.
* **Region:** A group of connected `'O'` cells.
* **Surrounded Region:** A region is considered surrounded **only if none of its cells touch the boundary** (i.e., it is fully enclosed by `'X'` cells).

---

### 🔸 Example 1:

**Input:**

```cpp
board = [
  ["X","X","X","X"],
  ["X","O","O","X"],
  ["X","X","O","X"],
  ["X","O","X","X"]
]
```

**Output:**

```cpp
[
  ["X","X","X","X"],
  ["X","X","X","X"],
  ["X","X","X","X"],
  ["X","O","X","X"]
]
```

**Explanation:**
The region connected to the bottom `'O'` is **not captured** because it is connected to the boundary.

---

### 🔸 Example 2:

**Input:**

```cpp
board = [["X"]]
```

**Output:**

```cpp
[["X"]]
```

---

### 🔹 Constraints:

* `m == board.length`
* `n == board[i].length`
* `1 <= m, n <= 200`
* `board[i][j]` is `'X'` or `'O'`.

---
