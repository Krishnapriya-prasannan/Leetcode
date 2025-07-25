class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1
        max1=0
        while(i<j):
            if(height[i]<=height[j]):
                max1=max(max1,height[i]*(j-i))
                i+=1
            else:
                max1=max(max1,height[j]*(j-i))
                j-=1
        return max1
            

            
        
