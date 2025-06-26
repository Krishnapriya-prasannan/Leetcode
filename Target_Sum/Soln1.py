#Target Sum - Subset Sum Transformation using 1D Dynamic Programming


class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        total=sum(nums)
        if total<abs(target) or (total+target)%2!=0:
            return 0
        subset_sum=(total+target)//2
        dp=[0]*(subset_sum+1)
        dp[0]=1
        for num in nums:
            for j in range(subset_sum,num-1,-1):
                dp[j]+=dp[j-num]
        return dp[subset_sum]
