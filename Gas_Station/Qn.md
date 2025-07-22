# Gas Station

**LeetCode Problem Link:**  
[https://leetcode.com/problems/gas-station/](https://leetcode.com/problems/gas-station/)

---

## Description

There are `n` gas stations along a circular route, where the amount of gas at the `i`-th station is `gas[i]`.

You have a car with an **unlimited gas tank**, but it costs `cost[i]` of gas to travel from the `i`-th station to its next (`i + 1`-th) station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays `gas` and `cost`, return the **starting gas station's index** if you can travel around the circuit once in the clockwise direction, otherwise return `-1`.

> If there exists a solution, it is guaranteed to be unique.

---

## Example 1

**Input:**  
`gas = [1,2,3,4,5]`  
`cost = [3,4,5,1,2]`  
**Output:**  
`3`

**Explanation:**  
Start at station 3 (index 3) and fill up with 4 units of gas. Your tank = 0 + 4 = 4  
Travel to station 4. Tank = 4 - 1 + 5 = 8  
Travel to station 0. Tank = 8 - 2 + 1 = 7  
Travel to station 1. Tank = 7 - 3 + 2 = 6  
Travel to station 2. Tank = 6 - 4 + 3 = 5  
Travel to station 3. The cost is 5. You have just enough gas to return.

---

## Example 2

**Input:**  
`gas = [2,3,4]`  
`cost = [3,4,3]`  
**Output:**  
`-1`

**Explanation:**  
You can’t start at station 0 or 1, as there’s not enough gas to reach the next station.  
Trying from station 2 leads to a shortage before completing the loop.  
No valid start point exists.

---

## Constraints

- `n == gas.length == cost.length`
- `1 <= n <= 10⁵`
- `0 <= gas[i], cost[i] <= 10⁴`
- The input is generated such that **the answer is unique**.

