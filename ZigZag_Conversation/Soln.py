class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1 or numRows>=len(s):
            return s
        rows=['']*numRows
        goDown=False
        k=0
        for c in s:
            rows[k]+=c
            if k==0 or k==numRows-1:
                goDown=not goDown
            k+=1 if goDown else -1
        return ''.join(rows)
