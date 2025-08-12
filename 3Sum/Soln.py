class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res=[]
        for k in range(len(nums)-2):
            if k>0 and nums[k]==nums[k-1]:
                continue
            left,right=k+1,len(nums)-1
            while(left<right):
                s=nums[k]+nums[left]+nums[right]
                if s<0:
                    left+=1
                elif s>0:
                    right-=1
                else:
                    res.append([nums[k],nums[left],nums[right]])
                    while(left<right and nums[left]==nums[left+1]):
                        left+=1
                    while(left<right and nums[right]==nums[right-1]):
                        right-=1
                    left+=1
                    right-=1
        return res
