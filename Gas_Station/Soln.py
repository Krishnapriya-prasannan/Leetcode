class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        tot_tank=0
        cur_tank=0
        start=0
        for i in range(len(gas)):
            tot_tank+=gas[i]-cost[i]
            cur_tank+=gas[i]-cost[i]
            if(cur_tank<0):
                start=i+1
                cur_tank=0
        return start if tot_tank>=0 else -1
