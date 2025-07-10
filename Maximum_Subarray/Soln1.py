class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currentSum=0
        max_sum=nums[0]
        for num in nums:
            currentSum+=num
            max_sum=max(max_sum,currentSum)
            if(currentSum<0):
                currentSum=0


        return max_sum
