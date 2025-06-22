class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n=len(citations)
        for i in range(n):
            maxidx=i
            for j in range(i+1,n):
                if citations[j]>citations[maxidx]:
                    maxidx=j
            temp=citations[i]
            citations[i]=citations[maxidx]
            citations[maxidx]=temp
        h=0
        for i in range(len(citations)):
            if citations[i]>=i+1:
                h+=1
            else:
                break
        return h
