class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        maxIndex=0
        for i in range(len(nums)):
            if i>maxIndex:
                return False
            maxIndex=max(maxIndex,i+nums[i])

        return True
