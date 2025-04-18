class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        freq_map=defaultdict(int)
        for num in nums:
            freq_map[num]+=1
        bucket=[[] for i in range(len(nums)+1)]
        for num,freq in freq_map.items():
            bucket[freq].append(num)
        res=[]
        for i in range(len(nums),0,-1):
            for num in bucket[i]:
                res.append(num)
                if (len(res)==k):
                    return res
