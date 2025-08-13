class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l,s,size=0,0,float('inf')
        for r in range(len(nums)):
            s+=nums[r]
            while s>=target:
                size=min(size,r-l+1)
                s-=nums[l]
                l+=1
        return 0 if size==float('inf') else size
