class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        romanmap={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        total=0
        i=0
        while(i<len(s)):
            current=romanmap[s[i]]
            if(i+1<len(s) and romanmap[s[i+1]]>current):
                total+=romanmap[s[i+1]]-current
                i+=2
            else:
                total+=current
                i+=1
        return total
