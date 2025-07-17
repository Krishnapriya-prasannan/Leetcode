
#  Clone Graph

 **LeetCode Link**: [https://leetcode.com/problems/clone-graph/](https://leetcode.com/problems/clone-graph/)

## Problem Statement

Given a reference of a node in a connected **undirected graph**, return a **deep copy** (clone) of the graph.

Each node in the graph contains a value (`int`) and a list (`List[Node]`) of its neighbors.

```java
class Node {
    public int val;
    public List<Node> neighbors;
}
````

---

## Test Case Format

* For simplicity, each node's value is the same as the node's index (1-indexed).
* The graph is represented using an **adjacency list**.
* The **given node** will always be the first node with `val = 1`.
* You must return the **copy** of the given node as a reference to the cloned graph.

---

## Examples

### Example 1

**Input:**

```
adjList = [[2,4],[1,3],[2,4],[1,3]]
```

**Output:**

```
[[2,4],[1,3],[2,4],[1,3]]
```

**Explanation:**
There are 4 nodes in the graph.

* Node 1's neighbors are Nodes 2 and 4.
* Node 2's neighbors are Nodes 1 and 3.
* Node 3's neighbors are Nodes 2 and 4.
* Node 4's neighbors are Nodes 1 and 3.

---

### Example 2

**Input:**

```
adjList = [[]]
```

**Output:**

```
[[]]
```

**Explanation:**
The graph consists of only one node with `val = 1`, and it has no neighbors.

---

### Example 3

**Input:**

```
adjList = []
```

**Output:**

```
[]
```

**Explanation:**
The graph is empty and does not contain any nodes.

---

## Constraints

* The number of nodes in the graph is in the range `[0, 100]`.
* `1 <= Node.val <= 100`
* Each `Node.val` is **unique**.
* There are **no repeated edges** and **no self-loops**.
* The graph is **connected** and all nodes are reachable from the given node.

```

