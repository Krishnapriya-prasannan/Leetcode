class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        counter={}
        for ch in magazine:
            if ch not in counter:
                counter[ch]=1
            else:
                counter[ch]+=1
        for c in ransomNote:
            if c not in counter:
                return False
            elif counter[c]==1:
                del counter[c]
            else:
                counter[c]-=1
        return True
