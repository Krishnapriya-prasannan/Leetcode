class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums=set(nums)
        longest=0
        for num in nums:
            if num-1 not in nums:
                l=1
                while num+l in nums:
                    l+=1
                longest=max(longest,l)
        return longest
            



        
