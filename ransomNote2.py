class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        counter=defaultdict(int)
        for ch in magazine:
            counter[ch]+=1
        for c in ransomNote:
            if counter[c]==0:
                return False           
            else:
                counter[c]-=1
        return True
