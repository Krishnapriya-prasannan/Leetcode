def jump(nums):
    jumps = 0
    farthest = 0
    end = 0
    
    for i in range(len(nums) - 1):  
        farthest = max(farthest, i + nums[i])
        
        if i == end:
            jumps += 1
            end = farthest
            
    return jumps
