class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count0=0
        count1=0
        count2=0
        for num in nums:
            if(num==0):
                count0+=1
            elif num==1:
                count1+=1
            else:
                count2+=1
        
        nums[0:count0]=[0]*count0
        nums[count0:count0+count1]=[1]*count1
        nums[count0+count1:]=[2]*count2
