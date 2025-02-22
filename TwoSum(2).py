"""Time Complexity: O(N^2) & space complexity :O(N)"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, n in enumerate(nums):
            compliment = target - n
            if compliment in nums[i + 1:]:  
                return [i, nums[i + 1:].index(compliment) + (i + 1)]
