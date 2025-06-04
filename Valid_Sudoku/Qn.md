
#  Valid Sudoku (LeetCode #36)

[🔗 Problem Link](https://leetcode.com/problems/valid-sudoku/)

---

##  Problem Description

Determine if a `9 x 9` Sudoku board is valid. Only the **filled cells** need to be validated according to the following rules:

- Each **row** must contain the digits `1-9` **without repetition**.
- Each **column** must contain the digits `1-9` **without repetition**.
- Each of the **nine 3 x 3 sub-boxes** must contain the digits `1-9` **without repetition**.

>  A Sudoku board could be valid but **not necessarily solvable**.

---

##  Examples

### Example 1

**Input:**
```text
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
````

**Output:**
`true`

---

### Example 2

**Input:**

```text
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
```

**Output:**
`false`
**Explanation:** There are two `8`s in the top-left 3x3 sub-box.

---

## Constraints

* `board.length == 9`
* `board[i].length == 9`
* `board[i][j]` is a digit `'1'` to `'9'` or `'.'` (empty cell)

---

