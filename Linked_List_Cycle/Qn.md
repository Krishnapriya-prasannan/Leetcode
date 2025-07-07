

##  Problem: Linked List Cycle

 **LeetCode Link:** [https://leetcode.com/problems/linked-list-cycle/](https://leetcode.com/problems/linked-list-cycle/)

---

###  Description:

Given `head`, the head of a singly linked list, determine if the linked list contains a **cycle**.

A cycle exists **if** there is a node in the list that can be reached again by continuously following the `next` pointer. Internally, the variable `pos` is used to denote the index of the node that the tail's `next` pointer connects to. **Note** that `pos` is not passed as a parameter.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

---

###  Examples:

#### Example 1:

```
Input: head = [3,2,0,-4], pos = 1  
Output: true  
Explanation: The tail connects to the 1st node (0-indexed).
```

#### Example 2:

```
Input: head = [1,2], pos = 0  
Output: true  
Explanation: The tail connects to the 0th node.
```

#### Example 3:

```
Input: head = [1], pos = -1  
Output: false  
Explanation: There is no cycle in the list.
```

---

###  Constraints:

* The number of nodes in the list is in the range $[0, 10^4]$.
* $-10^5 \leq \text{Node.val} \leq 10^5$
* `pos` is `-1` or a valid index in the linked list.

---

###  Follow-Up:

Can you solve it using **O(1)** (i.e., constant) memory?

